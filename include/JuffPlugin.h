#ifndef _JUFF_PLUGIN_H_
#define _JUFF_PLUGIN_H_

//#include "Functions.h"
#include "Juff.h"
#include "Parameter.h"
#include "ManagerInterface.h"

#include <QtGui/QWidgetList>

class QToolBar;
class QMenu;

class JuffPlugin {
public:
	JuffPlugin() {
		manager_ = 0;
	}

	void setManager(ManagerInterface* m) {
		manager_ = m;
	}

	/**
	*	name()
	*
	*	Returns plugin's unique name.
	*/
	virtual QString name() const = 0;
	
	/**
	*	description()
	*
	*	Returns plugin's short description.
	*/
	virtual QString description() const = 0;

	/**
	*	targetEngine()
	*
	*	Returns the engine this plugin is intended for.
	*/
	virtual QString targetEngine() const = 0;
	
	/**
	*	menu()
	*
	*	Returns the QMenu of the plugin. 
	*	Reimplement this method if you need you own menu.
	*/
	virtual QMenu* menu() const { return 0; }

	/**
	*	subMenus()
	*
	*	Returns list of menus that should be added to menu
	*	with given MenuID.
	*	Reimplement this method if you need to add items to main
	*	or context menu.
	*/
	virtual Juff::MenuList subMenus(Juff::MenuID) const { return Juff::MenuList(); }
	
	/**
	*	toolBar()
	*
	*	Returns the QToolBarof the plugin. 
	*	Reimplement this method if you need you own toolbar.
	*/
	virtual QToolBar* toolBar() const { return 0; }

	/**
	*	contextMenuActions()
	*
	*	Returns list of actions to be added to document's context menu.
	*	Reimplement this method if your plugin adds some.
	*/
	virtual Juff::ActionList contextMenuActions() const { return Juff::ActionList(); }
	
	/**
	*	dockList()
	*
	*	Returns the list of dock windows of the plugin. 
	*	Reimplement this method if you have dock window(s).
	*/
	virtual QWidgetList dockList() const { return QWidgetList(); }
	
	/**
	*	settingsPage()
	*
	*	Returns the settings page of the plugin. 
	*	Reimplement this method if your plugin has settings page.
	*/
	virtual QWidget* settingsPage() const { return 0; }

	/**
	*	dockPosition()
	*
	*	Returns the default position of plugin's dock widget.
	*/
	virtual Qt::DockWidgetArea dockPosition(QWidget*) const { return Qt::LeftDockWidgetArea; }
	
	/////////////////////////////
	//	Info Events
	/////////////////////////////
	/**
	*	onDocCreated()
	*
	*	This method is called once new doc is created or opened.
	*	Parameter \par fileName contains document's file name.
	*/
	virtual void onDocCreated(const QString& fileName) {}
	
	/**
	*	onDocActivated()
	*
	*	This method is called once document was activated. 
	*	Parameter \par fileName contains document's file name.
	*/
	virtual void onDocActivated(const QString& fileName) {}
	
	/**
	*	onDocModified()
	*
	*	This method is called once document's modification status
	*	was changed. Parameter \par fileName contains document's file name, 
	*	parameter \par modified contains new modification status.
	*/
	virtual void onDocModified(const QString& fileName, bool modified) {}
	
	/**
	*	onDocClosed()
	*
	*	This method is called once document was closed. 
	*	Parameter \par fileName contains document's file name.
	*/
	virtual void onDocClosed(const QString& fileName) {}
	
	/**
	*	onDocRenamed()
	*
	*	This method is called once document was renamed.
	*	Parameter \par oldFileName contains document's old file name,
	*	parameter \par newFileName contains document's new file name.
	*/
	virtual void onDocRenamed(const QString& oldFileName, const QString& newFileName) {}
	
	
protected:
	///	trivial accessor
	ManagerInterface* manager() const { return manager_; }
	
private:
	ManagerInterface* manager_;
};

Q_DECLARE_INTERFACE(JuffPlugin, "JuffEd.JuffPlugin/2.0")

#endif	//	_JUFF_PLUGIN_H_
