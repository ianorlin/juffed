######################################################################
# Automatically generated by qmake (2.01a) ?? ????? 4 12:31:02 2009
######################################################################

TEMPLATE = app
TARGET = 
DEPENDPATH += . \
              include \
              l10n \
              src \
              plugins/example \
              src/gui \
              src/lib \
              bu/CMakeFiles/CompilerIdC \
              bu/CMakeFiles/CompilerIdCXX
INCLUDEPATH += . src include src/gui plugins/example bu

# Input
HEADERS += include/AppInfo.h \
           include/AppInfo.win.h \
           include/CharsetsSettings.h \
           include/CommandStorage.h \
           include/Functions.h \
           include/IconManager.h \
           include/Juff.h \
           include/JuffPlugin.h \
           include/License.h \
           include/Log.h \
           include/MainSettings.h \
           include/ManagerInterface.h \
           include/Parameter.h \
           include/PluginSettings.h \
           include/Settings.h \
           include/TextDocSettings.h \
           src/AppInfo.nix.h \
           src/AutocompleteSettings.h \
           src/DocHandler.h \
           src/Document.h \
           src/LexerStorage.h \
           src/Manager.h \
           src/NullDoc.h \
           src/PluginManager.h \
           src/RichDoc.h \
           src/RichDocHandler.h \
           src/SciDoc.h \
           src/SciDocHandler.h \
           src/SimpleDoc.h \
           src/SimpleDocHandler.h \
           src/SingleInstance.h \
           src/SocketListener.h \
           src/TabBar.h \
           src/TabWidget.h \
           plugins/example/Plugin.h \
           src/gui/AboutDlg.h \
           src/gui/CharsetsSettingsPage.h \
           src/gui/ColorButton.h \
           src/gui/FindDlg.h \
           src/gui/GUI.h \
           src/gui/MultiPage.h \
           src/gui/MW.h \
           src/gui/PluginPage.h \
           src/gui/SessionDlg.h \
           src/gui/SettingsDlg.h \
           src/gui/Viewer.h \
           src/gui/juffed.xpm
FORMS += src/gui/AutocompleteSettingsPage.ui \
         src/gui/CharsetsSettingsPage.ui \
         src/gui/EditorSettingsPage.ui \
         src/gui/FindDlg.ui \
         src/gui/MainSettingsPage.ui \
         src/gui/SessionDlg.ui \
         src/gui/ViewSettingsPage.ui
SOURCES += bu/qrc_juffed.cxx \
           src/AutocompleteSettings.cpp \
           src/DocHandler.cpp \
           src/Document.cpp \
           src/LexerStorage.cpp \
           src/main.cpp \
           src/Manager.cpp \
           src/NullDoc.cpp \
           src/PluginManager.cpp \
           src/RichDoc.cpp \
           src/RichDocHandler.cpp \
           src/SciDoc.cpp \
           src/SciDocHandler.cpp \
           src/SimpleDoc.cpp \
           src/SimpleDocHandler.cpp \
           src/SingleInstance.cpp \
           src/SocketListener.cpp \
           src/TabBar.cpp \
           src/TabWidget.cpp \
           plugins/example/Plugin.cpp \
           src/gui/AboutDlg.cpp \
           src/gui/CharsetsSettingsPage.cpp \
           src/gui/ColorButton.cpp \
           src/gui/FindDlg.cpp \
           src/gui/GUI.cpp \
           src/gui/MultiPage.cpp \
           src/gui/MW.cpp \
           src/gui/PluginPage.cpp \
           src/gui/SessionDlg.cpp \
           src/gui/SettingsDlg.cpp \
           src/gui/Viewer.cpp \
           src/lib/CharsetsSettings.cpp \
           src/lib/CommandStorage.cpp \
           src/lib/IconManager.cpp \
           src/lib/Log.cpp \
           src/lib/MainSettings.cpp \
           src/lib/Parameter.cpp \
           src/lib/PluginSettings.cpp \
           src/lib/Settings.cpp \
           src/lib/TextDocSettings.cpp \
           bu/CMakeFiles/CompilerIdC/CMakeCCompilerId.c \
           bu/CMakeFiles/CompilerIdCXX/CMakeCXXCompilerId.cpp
TRANSLATIONS += l10n/juffed_de.ts \
                l10n/juffed_fr.ts \
                l10n/juffed_pl.ts \
                l10n/juffed_pt.ts \
                l10n/juffed_ru.ts \
                l10n/juffed_sp.ts \
                l10n/juffed_zh_CN.ts \
