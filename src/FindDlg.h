/*
JuffEd - A simple text editor
Copyright 2007-2008 Mikhail Murzin

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License 
version 2 as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef _FIND_DLG_H_
#define _FIND_DLG_H_

class DocFindFlags;
#include "ui_FindDlg.h"

#include <QtGui/QDialog>
#include <QtGui/QTextDocument>

class FindDlg : public QDialog {
Q_OBJECT
public:
	FindDlg(QWidget*);
	virtual ~FindDlg();

	QString text() const { return uiFind.findWhatEd->text(); }
	QString replaceTo() const { return uiFind.replaceToEd->text(); }
	DocFindFlags flags() const;
	bool isReplaceMode() const { return uiFind.replaceChk->isChecked(); }
	bool isRegexpMode() const { return uiFind.regexpChk->isChecked(); }

	static QString lastText() { return lastString_; }
	static bool lastMatchCase() { return matchCase_; }
	static bool lastRegExpMode() { return regExpMode_; }

protected:
	virtual void keyPressEvent(QKeyEvent*);

protected slots:
	void setReplaceMode(bool);

private:

	Ui::FindDlg uiFind;

	static QString lastString_;
	static bool matchCase_;
	static bool backward_;
	static bool regExpMode_;
};

#endif