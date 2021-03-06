#ifndef _DOC_LIST_PLUGIN_H_
#define _DOC_LIST_PLUGIN_H_

class DocListPanel;

#include <QObject>

#include "JuffPlugin.h"

class DocListPlugin : public QObject, public JuffPlugin {
Q_OBJECT
#if QT_VERSION >= 0x050000
Q_PLUGIN_METADATA(IID JuffPlugin_iid)
#endif
Q_INTERFACES(JuffPlugin)
public:
	DocListPlugin();
	virtual ~DocListPlugin();
	virtual void init();

	//	info
	virtual QString name() const;
	virtual QString title() const;
	virtual QString description() const;
	virtual QString targetEngine() const;

	//	controls
	virtual QWidgetList dockList() const;
	virtual bool dockVisible(QWidget*) const;

public slots:
	void onDocOpened(Juff::Document*, Juff::PanelIndex);
	void onDocActivated(Juff::Document*);
	void onDocClosed(Juff::Document*);
	void onDocRenamed(Juff::Document*, const QString& oldName);
	void onDocModified(Juff::Document*);

private:
	DocListPanel* panel_;
};

#endif
