//  header block begin
// /usr/include/qt/QtWidgets/qfiledialog.h
#include <qfiledialog.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qfiledialog.h:63
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QFileDialog10metaObjectEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:100
// void QFileDialog(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN11QFileDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  return new QFileDialog(parent, f);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:101
// void QFileDialog(class QWidget *, const class QString &, const class QString &, const class QString &)
extern "C"
void* C_ZN11QFileDialogC1EP7QWidgetRK7QStringS4_S4_(QWidget * parent, const QString & caption, const QString & directory, const QString & filter) {
  return new QFileDialog(parent, caption, directory, filter);
}
// virtual
// /usr/include/qt/QtWidgets/qfiledialog.h:105
// void ~QFileDialog()
extern "C"
void C_ZN11QFileDialogD1Ev(void *this_) {
  delete (QFileDialog*)(this_);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:107
// void setDirectory(const class QString &)
extern "C"
void C_ZN11QFileDialog12setDirectoryERK7QString(void *this_, const QString & directory) {
  ((QFileDialog*)this_)->setDirectory(directory);
}
// inline
// /usr/include/qt/QtWidgets/qfiledialog.h:108
// void setDirectory(const class QDir &)
extern "C"
void C_ZN11QFileDialog12setDirectoryERK4QDir(void *this_, const QDir & directory) {
  ((QFileDialog*)this_)->setDirectory(directory);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:109
// QDir directory()
extern "C"
void C_ZNK11QFileDialog9directoryEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->directory();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:111
// void setDirectoryUrl(const class QUrl &)
extern "C"
void C_ZN11QFileDialog15setDirectoryUrlERK4QUrl(void *this_, const QUrl & directory) {
  ((QFileDialog*)this_)->setDirectoryUrl(directory);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:112
// QUrl directoryUrl()
extern "C"
void C_ZNK11QFileDialog12directoryUrlEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->directoryUrl();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:114
// void selectFile(const class QString &)
extern "C"
void C_ZN11QFileDialog10selectFileERK7QString(void *this_, const QString & filename) {
  ((QFileDialog*)this_)->selectFile(filename);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:115
// QStringList selectedFiles()
extern "C"
void C_ZNK11QFileDialog13selectedFilesEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->selectedFiles();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:117
// void selectUrl(const class QUrl &)
extern "C"
void C_ZN11QFileDialog9selectUrlERK4QUrl(void *this_, const QUrl & url) {
  ((QFileDialog*)this_)->selectUrl(url);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:118
// QList<QUrl> selectedUrls()
extern "C"
void C_ZNK11QFileDialog12selectedUrlsEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->selectedUrls();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:120
// void setNameFilterDetailsVisible(_Bool)
extern "C"
void C_ZN11QFileDialog27setNameFilterDetailsVisibleEb(void *this_, bool enabled) {
  ((QFileDialog*)this_)->setNameFilterDetailsVisible(enabled);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:121
// bool isNameFilterDetailsVisible()
extern "C"
void C_ZNK11QFileDialog26isNameFilterDetailsVisibleEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->isNameFilterDetailsVisible();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:123
// void setNameFilter(const class QString &)
extern "C"
void C_ZN11QFileDialog13setNameFilterERK7QString(void *this_, const QString & filter) {
  ((QFileDialog*)this_)->setNameFilter(filter);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:124
// void setNameFilters(const class QStringList &)
extern "C"
void C_ZN11QFileDialog14setNameFiltersERK11QStringList(void *this_, const QStringList & filters) {
  ((QFileDialog*)this_)->setNameFilters(filters);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:125
// QStringList nameFilters()
extern "C"
void C_ZNK11QFileDialog11nameFiltersEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->nameFilters();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:126
// void selectNameFilter(const class QString &)
extern "C"
void C_ZN11QFileDialog16selectNameFilterERK7QString(void *this_, const QString & filter) {
  ((QFileDialog*)this_)->selectNameFilter(filter);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:127
// QString selectedNameFilter()
extern "C"
void C_ZNK11QFileDialog18selectedNameFilterEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->selectedNameFilter();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:130
// void setMimeTypeFilters(const class QStringList &)
extern "C"
void C_ZN11QFileDialog18setMimeTypeFiltersERK11QStringList(void *this_, const QStringList & filters) {
  ((QFileDialog*)this_)->setMimeTypeFilters(filters);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:131
// QStringList mimeTypeFilters()
extern "C"
void C_ZNK11QFileDialog15mimeTypeFiltersEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->mimeTypeFilters();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:132
// void selectMimeTypeFilter(const class QString &)
extern "C"
void C_ZN11QFileDialog20selectMimeTypeFilterERK7QString(void *this_, const QString & filter) {
  ((QFileDialog*)this_)->selectMimeTypeFilter(filter);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:135
// QDir::Filters filter()
extern "C"
void C_ZNK11QFileDialog6filterEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->filter();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:136
// void setFilter(class QDir::Filters)
extern "C"
void C_ZN11QFileDialog9setFilterE6QFlagsIN4QDir6FilterEE(void *this_, QFlags<QDir::Filter> filters) {
  ((QFileDialog*)this_)->setFilter(filters);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:138
// void setViewMode(enum QFileDialog::ViewMode)
extern "C"
void C_ZN11QFileDialog11setViewModeENS_8ViewModeE(void *this_, QFileDialog::ViewMode mode) {
  ((QFileDialog*)this_)->setViewMode(mode);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:139
// QFileDialog::ViewMode viewMode()
extern "C"
void C_ZNK11QFileDialog8viewModeEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->viewMode();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:141
// void setFileMode(enum QFileDialog::FileMode)
extern "C"
void C_ZN11QFileDialog11setFileModeENS_8FileModeE(void *this_, QFileDialog::FileMode mode) {
  ((QFileDialog*)this_)->setFileMode(mode);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:142
// QFileDialog::FileMode fileMode()
extern "C"
void C_ZNK11QFileDialog8fileModeEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->fileMode();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:144
// void setAcceptMode(enum QFileDialog::AcceptMode)
extern "C"
void C_ZN11QFileDialog13setAcceptModeENS_10AcceptModeE(void *this_, QFileDialog::AcceptMode mode) {
  ((QFileDialog*)this_)->setAcceptMode(mode);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:145
// QFileDialog::AcceptMode acceptMode()
extern "C"
void C_ZNK11QFileDialog10acceptModeEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->acceptMode();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:147
// void setReadOnly(_Bool)
extern "C"
void C_ZN11QFileDialog11setReadOnlyEb(void *this_, bool enabled) {
  ((QFileDialog*)this_)->setReadOnly(enabled);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:148
// bool isReadOnly()
extern "C"
void C_ZNK11QFileDialog10isReadOnlyEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->isReadOnly();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:150
// void setResolveSymlinks(_Bool)
extern "C"
void C_ZN11QFileDialog18setResolveSymlinksEb(void *this_, bool enabled) {
  ((QFileDialog*)this_)->setResolveSymlinks(enabled);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:151
// bool resolveSymlinks()
extern "C"
void C_ZNK11QFileDialog15resolveSymlinksEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->resolveSymlinks();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:153
// void setSidebarUrls(const QList<class QUrl> &)
extern "C"
void C_ZN11QFileDialog14setSidebarUrlsERK5QListI4QUrlE(void *this_, const QList<QUrl> & urls) {
  ((QFileDialog*)this_)->setSidebarUrls(urls);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:154
// QList<QUrl> sidebarUrls()
extern "C"
void C_ZNK11QFileDialog11sidebarUrlsEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->sidebarUrls();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:156
// QByteArray saveState()
extern "C"
void C_ZNK11QFileDialog9saveStateEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->saveState();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:157
// bool restoreState(const class QByteArray &)
extern "C"
void C_ZN11QFileDialog12restoreStateERK10QByteArray(void *this_, const QByteArray & state) {
  /*return*/ ((QFileDialog*)this_)->restoreState(state);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:159
// void setConfirmOverwrite(_Bool)
extern "C"
void C_ZN11QFileDialog19setConfirmOverwriteEb(void *this_, bool enabled) {
  ((QFileDialog*)this_)->setConfirmOverwrite(enabled);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:160
// bool confirmOverwrite()
extern "C"
void C_ZNK11QFileDialog16confirmOverwriteEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->confirmOverwrite();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:162
// void setDefaultSuffix(const class QString &)
extern "C"
void C_ZN11QFileDialog16setDefaultSuffixERK7QString(void *this_, const QString & suffix) {
  ((QFileDialog*)this_)->setDefaultSuffix(suffix);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:163
// QString defaultSuffix()
extern "C"
void C_ZNK11QFileDialog13defaultSuffixEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->defaultSuffix();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:165
// void setHistory(const class QStringList &)
extern "C"
void C_ZN11QFileDialog10setHistoryERK11QStringList(void *this_, const QStringList & paths) {
  ((QFileDialog*)this_)->setHistory(paths);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:166
// QStringList history()
extern "C"
void C_ZNK11QFileDialog7historyEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->history();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:168
// void setItemDelegate(class QAbstractItemDelegate *)
extern "C"
void C_ZN11QFileDialog15setItemDelegateEP21QAbstractItemDelegate(void *this_, QAbstractItemDelegate * delegate) {
  ((QFileDialog*)this_)->setItemDelegate(delegate);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:169
// QAbstractItemDelegate * itemDelegate()
extern "C"
void C_ZNK11QFileDialog12itemDelegateEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->itemDelegate();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:171
// void setIconProvider(class QFileIconProvider *)
extern "C"
void C_ZN11QFileDialog15setIconProviderEP17QFileIconProvider(void *this_, QFileIconProvider * provider) {
  ((QFileDialog*)this_)->setIconProvider(provider);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:172
// QFileIconProvider * iconProvider()
extern "C"
void C_ZNK11QFileDialog12iconProviderEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->iconProvider();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:174
// void setLabelText(enum QFileDialog::DialogLabel, const class QString &)
extern "C"
void C_ZN11QFileDialog12setLabelTextENS_11DialogLabelERK7QString(void *this_, QFileDialog::DialogLabel label, const QString & text) {
  ((QFileDialog*)this_)->setLabelText(label, text);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:175
// QString labelText(enum QFileDialog::DialogLabel)
extern "C"
void C_ZNK11QFileDialog9labelTextENS_11DialogLabelE(void *this_, QFileDialog::DialogLabel label) {
  /*return*/ ((QFileDialog*)this_)->labelText(label);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:177
// void setSupportedSchemes(const class QStringList &)
extern "C"
void C_ZN11QFileDialog19setSupportedSchemesERK11QStringList(void *this_, const QStringList & schemes) {
  ((QFileDialog*)this_)->setSupportedSchemes(schemes);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:178
// QStringList supportedSchemes()
extern "C"
void C_ZNK11QFileDialog16supportedSchemesEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->supportedSchemes();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:181
// void setProxyModel(class QAbstractProxyModel *)
extern "C"
void C_ZN11QFileDialog13setProxyModelEP19QAbstractProxyModel(void *this_, QAbstractProxyModel * model) {
  ((QFileDialog*)this_)->setProxyModel(model);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:182
// QAbstractProxyModel * proxyModel()
extern "C"
void C_ZNK11QFileDialog10proxyModelEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->proxyModel();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:185
// void setOption(enum QFileDialog::Option, _Bool)
extern "C"
void C_ZN11QFileDialog9setOptionENS_6OptionEb(void *this_, QFileDialog::Option option, bool on) {
  ((QFileDialog*)this_)->setOption(option, on);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:186
// bool testOption(enum QFileDialog::Option)
extern "C"
void C_ZNK11QFileDialog10testOptionENS_6OptionE(void *this_, QFileDialog::Option option) {
  /*return*/ ((QFileDialog*)this_)->testOption(option);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:187
// void setOptions(Options)
extern "C"
void C_ZN11QFileDialog10setOptionsE6QFlagsINS_6OptionEE(void *this_, QFlags<QFileDialog::Option> options) {
  ((QFileDialog*)this_)->setOptions(options);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:188
// Options options()
extern "C"
void C_ZNK11QFileDialog7optionsEv(void *this_) {
  /*return*/ ((QFileDialog*)this_)->options();
}
// /usr/include/qt/QtWidgets/qfiledialog.h:191
// void open(class QObject *, const char *)
extern "C"
void C_ZN11QFileDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QFileDialog*)this_)->open(receiver, member);
}
// virtual
// /usr/include/qt/QtWidgets/qfiledialog.h:192
// void setVisible(_Bool)
extern "C"
void C_ZN11QFileDialog10setVisibleEb(void *this_, bool visible) {
  ((QFileDialog*)this_)->setVisible(visible);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:195
// void fileSelected(const class QString &)
extern "C"
void C_ZN11QFileDialog12fileSelectedERK7QString(void *this_, const QString & file) {
  ((QFileDialog*)this_)->fileSelected(file);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:196
// void filesSelected(const class QStringList &)
extern "C"
void C_ZN11QFileDialog13filesSelectedERK11QStringList(void *this_, const QStringList & files) {
  ((QFileDialog*)this_)->filesSelected(files);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:197
// void currentChanged(const class QString &)
extern "C"
void C_ZN11QFileDialog14currentChangedERK7QString(void *this_, const QString & path) {
  ((QFileDialog*)this_)->currentChanged(path);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:198
// void directoryEntered(const class QString &)
extern "C"
void C_ZN11QFileDialog16directoryEnteredERK7QString(void *this_, const QString & directory) {
  ((QFileDialog*)this_)->directoryEntered(directory);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:200
// void urlSelected(const class QUrl &)
extern "C"
void C_ZN11QFileDialog11urlSelectedERK4QUrl(void *this_, const QUrl & url) {
  ((QFileDialog*)this_)->urlSelected(url);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:201
// void urlsSelected(const QList<class QUrl> &)
extern "C"
void C_ZN11QFileDialog12urlsSelectedERK5QListI4QUrlE(void *this_, const QList<QUrl> & urls) {
  ((QFileDialog*)this_)->urlsSelected(urls);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:202
// void currentUrlChanged(const class QUrl &)
extern "C"
void C_ZN11QFileDialog17currentUrlChangedERK4QUrl(void *this_, const QUrl & url) {
  ((QFileDialog*)this_)->currentUrlChanged(url);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:203
// void directoryUrlEntered(const class QUrl &)
extern "C"
void C_ZN11QFileDialog19directoryUrlEnteredERK4QUrl(void *this_, const QUrl & directory) {
  ((QFileDialog*)this_)->directoryUrlEntered(directory);
}
// /usr/include/qt/QtWidgets/qfiledialog.h:205
// void filterSelected(const class QString &)
extern "C"
void C_ZN11QFileDialog14filterSelectedERK7QString(void *this_, const QString & filter) {
  ((QFileDialog*)this_)->filterSelected(filter);
}
// static
// /usr/include/qt/QtWidgets/qfiledialog.h:209
// QString getOpenFileName(class QWidget *, const class QString &, const class QString &, const class QString &, class QString *, Options)
extern "C"
void C_ZN11QFileDialog15getOpenFileNameEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE(QWidget * parent, const QString & caption, const QString & dir, const QString & filter, QString * selectedFilter, QFlags<QFileDialog::Option> options) {
  /*return*/ QFileDialog::getOpenFileName(parent, caption, dir, filter, selectedFilter, options);
}
// static
// /usr/include/qt/QtWidgets/qfiledialog.h:216
// QUrl getOpenFileUrl(class QWidget *, const class QString &, const class QUrl &, const class QString &, class QString *, Options, const class QStringList &)
extern "C"
void C_ZN11QFileDialog14getOpenFileUrlEP7QWidgetRK7QStringRK4QUrlS4_PS2_6QFlagsINS_6OptionEERK11QStringList(QWidget * parent, const QString & caption, const QUrl & dir, const QString & filter, QString * selectedFilter, QFlags<QFileDialog::Option> options, const QStringList & supportedSchemes) {
  /*return*/ QFileDialog::getOpenFileUrl(parent, caption, dir, filter, selectedFilter, options, supportedSchemes);
}
// static
// /usr/include/qt/QtWidgets/qfiledialog.h:224
// QString getSaveFileName(class QWidget *, const class QString &, const class QString &, const class QString &, class QString *, Options)
extern "C"
void C_ZN11QFileDialog15getSaveFileNameEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE(QWidget * parent, const QString & caption, const QString & dir, const QString & filter, QString * selectedFilter, QFlags<QFileDialog::Option> options) {
  /*return*/ QFileDialog::getSaveFileName(parent, caption, dir, filter, selectedFilter, options);
}
// static
// /usr/include/qt/QtWidgets/qfiledialog.h:231
// QUrl getSaveFileUrl(class QWidget *, const class QString &, const class QUrl &, const class QString &, class QString *, Options, const class QStringList &)
extern "C"
void C_ZN11QFileDialog14getSaveFileUrlEP7QWidgetRK7QStringRK4QUrlS4_PS2_6QFlagsINS_6OptionEERK11QStringList(QWidget * parent, const QString & caption, const QUrl & dir, const QString & filter, QString * selectedFilter, QFlags<QFileDialog::Option> options, const QStringList & supportedSchemes) {
  /*return*/ QFileDialog::getSaveFileUrl(parent, caption, dir, filter, selectedFilter, options, supportedSchemes);
}
// static
// /usr/include/qt/QtWidgets/qfiledialog.h:239
// QString getExistingDirectory(class QWidget *, const class QString &, const class QString &, Options)
extern "C"
void C_ZN11QFileDialog20getExistingDirectoryEP7QWidgetRK7QStringS4_6QFlagsINS_6OptionEE(QWidget * parent, const QString & caption, const QString & dir, QFlags<QFileDialog::Option> options) {
  /*return*/ QFileDialog::getExistingDirectory(parent, caption, dir, options);
}
// static
// /usr/include/qt/QtWidgets/qfiledialog.h:244
// QUrl getExistingDirectoryUrl(class QWidget *, const class QString &, const class QUrl &, Options, const class QStringList &)
extern "C"
void C_ZN11QFileDialog23getExistingDirectoryUrlEP7QWidgetRK7QStringRK4QUrl6QFlagsINS_6OptionEERK11QStringList(QWidget * parent, const QString & caption, const QUrl & dir, QFlags<QFileDialog::Option> options, const QStringList & supportedSchemes) {
  /*return*/ QFileDialog::getExistingDirectoryUrl(parent, caption, dir, options, supportedSchemes);
}
// static
// /usr/include/qt/QtWidgets/qfiledialog.h:250
// QStringList getOpenFileNames(class QWidget *, const class QString &, const class QString &, const class QString &, class QString *, Options)
extern "C"
void C_ZN11QFileDialog16getOpenFileNamesEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE(QWidget * parent, const QString & caption, const QString & dir, const QString & filter, QString * selectedFilter, QFlags<QFileDialog::Option> options) {
  /*return*/ QFileDialog::getOpenFileNames(parent, caption, dir, filter, selectedFilter, options);
}
// static
// /usr/include/qt/QtWidgets/qfiledialog.h:257
// QList<QUrl> getOpenFileUrls(class QWidget *, const class QString &, const class QUrl &, const class QString &, class QString *, Options, const class QStringList &)
extern "C"
void C_ZN11QFileDialog15getOpenFileUrlsEP7QWidgetRK7QStringRK4QUrlS4_PS2_6QFlagsINS_6OptionEERK11QStringList(QWidget * parent, const QString & caption, const QUrl & dir, const QString & filter, QString * selectedFilter, QFlags<QFileDialog::Option> options, const QStringList & supportedSchemes) {
  /*return*/ QFileDialog::getOpenFileUrls(parent, caption, dir, filter, selectedFilter, options, supportedSchemes);
}
//  main block end
