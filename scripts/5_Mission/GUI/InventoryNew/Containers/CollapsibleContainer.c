class CollapsibleContainer: Container
{
	protected ref CollapsibleHeader		m_CollapsibleHeader;
	protected bool						m_Hidden;
	//protected bool 						m_Closed;
	protected EntityAI					m_Entity;
	
	void CollapsibleContainer( LayoutHolder parent, int sort = -1 )
	{
		m_MainWidget.Show( true );

		if ( sort > -1 )
			m_MainWidget.SetSort( sort + 2 );
		
		m_MainWidget = m_MainWidget.FindAnyWidget( "header" );
		
		m_Body = new array<ref LayoutHolder>;
		m_CollapsibleHeader = new CollapsibleHeader( this, "CollapseButtonOnMouseButtonDown" );
	}
	
	override void SetLayoutName()
	{
		m_LayoutName = WidgetLayoutName.CollapsibleContainer;
	}

	EntityAI GetEntity()
	{
		return m_Entity;
	}

	override void OnDropReceivedFromHeader( Widget w, int x, int y, Widget receiver ) { }

	override void Refresh()
	{
		super.Refresh();
	}

	override void OnShow()
	{
		super.OnShow();
		m_Hidden = false;
		for (int i = 0; i < m_Body.Count(); i++)
		{
			if( !m_Hidden )
			{
				m_Body.Get( i ).OnShow();
				Container c = Container.Cast(m_Body.Get(i));
				if (c)
				{
					c.SetOpenForSlotIcon(true);
				}
			}
		}
	}
	
	override void Insert( LayoutHolder container, int pos = -1, bool immedUpdate = true )
	{
		super.Insert( container, pos, immedUpdate );
		
		//if ( immedUpdate )
		//{
			RecomputeOpenedContainers();
			UpdateCollapseButtons();
		//}
		
		m_CollapsibleHeader.GetRootWidget().FindAnyWidget("opened").Show(m_Hidden);
		m_CollapsibleHeader.GetRootWidget().FindAnyWidget("closed").Show(!m_Hidden);
	}
	
	override void Remove( LayoutHolder container )
	{
		super.Remove( container );
		RecomputeOpenedContainers();
		UpdateCollapseButtons();
	}
	
	/*override void Open()
	{
		if( IsDisplayable() )
		{
			ItemManager.GetInstance().SetDefaultOpenState( m_Entity.GetType(), true );
			m_Closed = false;
			//SetOpenForSlotIcon(true);
			OnShow();
			m_Parent.m_Parent.Refresh();
		}
	}

	override void Close()
	{
		ItemManager.GetInstance().SetDefaultOpenState( m_Entity.GetType(), false );
		m_Closed = true;
		//SetOpenForSlotIcon(false);
		OnHide();
	}

	override bool IsOpened()
	{
		return !m_Closed;
	}*/
	
	bool CanDisplayAnyCategory()
	{
		return false;
	}
	
	void UpdateCollapseButtons()
	{
		#ifndef PLATFORM_CONSOLE
		if (m_Body.Count() < 2)
		{
			if (m_CollapsibleHeader)
			{
				m_CollapsibleHeader.GetMainWidget().FindAnyWidget("collapse_button").Show(false);
			}
		}
		else
		{
			if (m_CollapsibleHeader)
			{
				m_CollapsibleHeader.GetMainWidget().FindAnyWidget("collapse_button").Show(true);
			}
		}
		#endif
	}
	
	void LoadDefaultState()
	{
		m_Hidden = !ItemManager.GetInstance().GetDefaultHeaderOpenState( "VICINITY" );
		//m_Closed = m_Hidden;
		
		if ( m_Hidden )
		{
			OnHide();
		}
		else
		{
			OnShow();
		}
	}
	
	bool IsHidden()
	{
		return m_Hidden;
	}
	
	void CollapseButtonOnMouseButtonDown( Widget w )
	{
		if( !m_Hidden )
		{
			for (int i = 1; i < m_Body.Count(); i++)
			{
				m_Body.Get( i ).OnHide();
				Container c = Container.Cast(m_Body.Get(i));
				if (c)
				{
					c.SetOpenForSlotIcon(false);
				}
			}

			m_Hidden = true;
		}
		else
		{
			m_Hidden = false;
			OnShow();
		}
		
		m_CollapsibleHeader.GetRootWidget().FindAnyWidget("opened").Show(m_Hidden);
		m_CollapsibleHeader.GetRootWidget().FindAnyWidget("closed").Show(!m_Hidden);

		UpdateCollapseButtons();
	}
	
	override bool OnChildRemove( Widget w, Widget child )
	{
		if( w == GetMainWidget() )
			GetMainWidget().Update();
		return true;
	}
	
	override bool OnChildAdd( Widget w, Widget child )
	{
		if( w == GetMainWidget() )
			GetMainWidget().Update();
		return true;
	}
	
	override Header GetHeader()
	{
		return m_CollapsibleHeader;
	}
	
	override void SetHeader(Header header)
	{
		m_CollapsibleHeader = CollapsibleHeader.Cast(header);
	}
}
