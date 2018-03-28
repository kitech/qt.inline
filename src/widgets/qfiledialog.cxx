//  header block begin
// /usr/include/qt/QtWidgets/qfiledialog.h
#ifndef protected
#define protected public
#endif
#include <qfiledialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFileDialog is pure virtual: false
// QFileDialog has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFileDialog : public QFileDialog {
public:
  virtual ~MyQFileDialog() {}
// void QFileDialog(QWidget *, Qt::WindowFlags)
MyQFileDialog(QWidget * parent, QFlags<Qt::WindowType> f) : QFileDialog(parent, f) {}
// void QFileDialog(QWidget *, const QString &, const QString &, const QString &)
MyQFileDialog(QWidget * parent, const QString & caption, const QString & directory, const QString & filter) : QFileDialog(parent, caption, directory, filter) {}
// Protected virtual Visibility=Default Availability=Available
// void done(int)
  virtual void done(int result) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"done", &handled, 1, (uint64_t)result, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QFileDialog::done(result);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void accept()
  virtual void accept() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"accept", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QFileDialog::accept();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QFileDialog::changeEvent(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:269
// [-2] void done(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog4doneEi(void *this_, int result) {
  ((QFileDialog*)this_)->QFileDialog::done(result);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:270
// [-2] void accept()
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog6acceptEv(void *this_) {
  ((QFileDialog*)this_)->QFileDialog::accept();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:271
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog11changeEventEP6QEvent(void *this_, QEvent * e) {
  ((QFileDialog*)this_)->QFileDialog::changeEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:63
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog10metaObjectEv(void *this_) {
  return (void*)((QFileDialog*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:100
// [-2] void QFileDialog(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQFileDialog*)(0);
  return  new MyQFileDialog(parent, f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:101
// [-2] void QFileDialog(QWidget *, const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDialogC2EP7QWidgetRK7QStringS4_S4_(QWidget * parent, QString* caption, QString* directory, QString* filter) {
  auto _nilp = (MyQFileDialog*)(0);
  return  new MyQFileDialog(parent, *caption, *directory, *filter);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:105
// [-2] void ~QFileDialog()
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialogD2Ev(void *this_) {
  delete (QFileDialog*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:107
// [-2] void setDirectory(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog12setDirectoryERK7QString(void *this_, QString* directory) {
  ((QFileDialog*)this_)->setDirectory(*directory);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:108
// [-2] void setDirectory(const QDir &)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog12setDirectoryERK4QDir(void *this_, QDir* directory) {
  ((QFileDialog*)this_)->setDirectory(*directory);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:109
// [8] QDir directory()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog9directoryEv(void *this_) {
  auto rv = ((QFileDialog*)this_)->directory();
return new QDir(rv);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qfiledialog.h:111
// [-2] void setDirectoryUrl(const QUrl &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog15setDirectoryUrlERK4QUrl(void *this_, QUrl* directory) {
  ((QFileDialog*)this_)->setDirectoryUrl(*directory);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qfiledialog.h:112
// [8] QUrl directoryUrl()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog12directoryUrlEv(void *this_) {
  auto rv = ((QFileDialog*)this_)->directoryUrl();
return new QUrl(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:114
// [-2] void selectFile(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog10selectFileERK7QString(void *this_, QString* filename) {
  ((QFileDialog*)this_)->selectFile(*filename);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:115
// [8] QStringList selectedFiles()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog13selectedFilesEv(void *this_) {
  auto rv = ((QFileDialog*)this_)->selectedFiles();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qfiledialog.h:117
// [-2] void selectUrl(const QUrl &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog9selectUrlERK4QUrl(void *this_, QUrl* url) {
  ((QFileDialog*)this_)->selectUrl(*url);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:120
// [-2] void setNameFilterDetailsVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog27setNameFilterDetailsVisibleEb(void *this_, bool enabled) {
  ((QFileDialog*)this_)->setNameFilterDetailsVisible(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:121
// [1] bool isNameFilterDetailsVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFileDialog26isNameFilterDetailsVisibleEv(void *this_) {
  return (bool)((QFileDialog*)this_)->isNameFilterDetailsVisible();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qfiledialog.h:123
// [-2] void setNameFilter(const QString &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog13setNameFilterERK7QString(void *this_, QString* filter) {
  ((QFileDialog*)this_)->setNameFilter(*filter);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qfiledialog.h:124
// [-2] void setNameFilters(const QStringList &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog14setNameFiltersERK11QStringList(void *this_, QStringList* filters) {
  ((QFileDialog*)this_)->setNameFilters(*filters);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qfiledialog.h:125
// [8] QStringList nameFilters()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog11nameFiltersEv(void *this_) {
  auto rv = ((QFileDialog*)this_)->nameFilters();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qfiledialog.h:126
// [-2] void selectNameFilter(const QString &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog16selectNameFilterERK7QString(void *this_, QString* filter) {
  ((QFileDialog*)this_)->selectNameFilter(*filter);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtWidgets/qfiledialog.h:127
// [8] QString selectedMimeTypeFilter()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog22selectedMimeTypeFilterEv(void *this_) {
  auto rv = ((QFileDialog*)this_)->selectedMimeTypeFilter();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qfiledialog.h:128
// [8] QString selectedNameFilter()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog18selectedNameFilterEv(void *this_) {
  auto rv = ((QFileDialog*)this_)->selectedNameFilter();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qfiledialog.h:131
// [-2] void setMimeTypeFilters(const QStringList &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog18setMimeTypeFiltersERK11QStringList(void *this_, QStringList* filters) {
  ((QFileDialog*)this_)->setMimeTypeFilters(*filters);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qfiledialog.h:132
// [8] QStringList mimeTypeFilters()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog15mimeTypeFiltersEv(void *this_) {
  auto rv = ((QFileDialog*)this_)->mimeTypeFilters();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qfiledialog.h:133
// [-2] void selectMimeTypeFilter(const QString &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog20selectMimeTypeFilterERK7QString(void *this_, QString* filter) {
  ((QFileDialog*)this_)->selectMimeTypeFilter(*filter);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qfiledialog.h:136
// [4] QDir::Filters filter()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
QDir::Filters C_ZNK11QFileDialog6filterEv(void *this_) {
  return (QDir::Filters)((QFileDialog*)this_)->filter();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qfiledialog.h:137
// [-2] void setFilter(QDir::Filters)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog9setFilterE6QFlagsIN4QDir6FilterEE(void *this_, QFlags<QDir::Filter> filters) {
  ((QFileDialog*)this_)->setFilter(filters);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:139
// [-2] void setViewMode(QFileDialog::ViewMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog11setViewModeENS_8ViewModeE(void *this_, QFileDialog::ViewMode mode) {
  ((QFileDialog*)this_)->setViewMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:140
// [4] QFileDialog::ViewMode viewMode()
extern "C" Q_DECL_EXPORT
QFileDialog::ViewMode C_ZNK11QFileDialog8viewModeEv(void *this_) {
  return (QFileDialog::ViewMode)((QFileDialog*)this_)->viewMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:142
// [-2] void setFileMode(QFileDialog::FileMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog11setFileModeENS_8FileModeE(void *this_, QFileDialog::FileMode mode) {
  ((QFileDialog*)this_)->setFileMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:143
// [4] QFileDialog::FileMode fileMode()
extern "C" Q_DECL_EXPORT
QFileDialog::FileMode C_ZNK11QFileDialog8fileModeEv(void *this_) {
  return (QFileDialog::FileMode)((QFileDialog*)this_)->fileMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:145
// [-2] void setAcceptMode(QFileDialog::AcceptMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog13setAcceptModeENS_10AcceptModeE(void *this_, QFileDialog::AcceptMode mode) {
  ((QFileDialog*)this_)->setAcceptMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:146
// [4] QFileDialog::AcceptMode acceptMode()
extern "C" Q_DECL_EXPORT
QFileDialog::AcceptMode C_ZNK11QFileDialog10acceptModeEv(void *this_) {
  return (QFileDialog::AcceptMode)((QFileDialog*)this_)->acceptMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:148
// [-2] void setReadOnly(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog11setReadOnlyEb(void *this_, bool enabled) {
  ((QFileDialog*)this_)->setReadOnly(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:149
// [1] bool isReadOnly()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFileDialog10isReadOnlyEv(void *this_) {
  return (bool)((QFileDialog*)this_)->isReadOnly();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:151
// [-2] void setResolveSymlinks(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog18setResolveSymlinksEb(void *this_, bool enabled) {
  ((QFileDialog*)this_)->setResolveSymlinks(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:152
// [1] bool resolveSymlinks()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFileDialog15resolveSymlinksEv(void *this_) {
  return (bool)((QFileDialog*)this_)->resolveSymlinks();
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qfiledialog.h:157
// [8] QByteArray saveState()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog9saveStateEv(void *this_) {
  auto rv = ((QFileDialog*)this_)->saveState();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qfiledialog.h:158
// [1] bool restoreState(const QByteArray &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZN11QFileDialog12restoreStateERK10QByteArray(void *this_, QByteArray* state) {
  return (bool)((QFileDialog*)this_)->restoreState(*state);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:160
// [-2] void setConfirmOverwrite(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog19setConfirmOverwriteEb(void *this_, bool enabled) {
  ((QFileDialog*)this_)->setConfirmOverwrite(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:161
// [1] bool confirmOverwrite()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFileDialog16confirmOverwriteEv(void *this_) {
  return (bool)((QFileDialog*)this_)->confirmOverwrite();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:163
// [-2] void setDefaultSuffix(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog16setDefaultSuffixERK7QString(void *this_, QString* suffix) {
  ((QFileDialog*)this_)->setDefaultSuffix(*suffix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:164
// [8] QString defaultSuffix()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog13defaultSuffixEv(void *this_) {
  auto rv = ((QFileDialog*)this_)->defaultSuffix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:166
// [-2] void setHistory(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog10setHistoryERK11QStringList(void *this_, QStringList* paths) {
  ((QFileDialog*)this_)->setHistory(*paths);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:167
// [8] QStringList history()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog7historyEv(void *this_) {
  auto rv = ((QFileDialog*)this_)->history();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:169
// [-2] void setItemDelegate(QAbstractItemDelegate *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog15setItemDelegateEP21QAbstractItemDelegate(void *this_, QAbstractItemDelegate * delegate) {
  ((QFileDialog*)this_)->setItemDelegate(delegate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:170
// [8] QAbstractItemDelegate * itemDelegate()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog12itemDelegateEv(void *this_) {
  return (void*)((QFileDialog*)this_)->itemDelegate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:172
// [-2] void setIconProvider(QFileIconProvider *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog15setIconProviderEP17QFileIconProvider(void *this_, QFileIconProvider * provider) {
  ((QFileDialog*)this_)->setIconProvider(provider);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:173
// [8] QFileIconProvider * iconProvider()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog12iconProviderEv(void *this_) {
  return (void*)((QFileDialog*)this_)->iconProvider();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:175
// [-2] void setLabelText(QFileDialog::DialogLabel, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog12setLabelTextENS_11DialogLabelERK7QString(void *this_, QFileDialog::DialogLabel label, QString* text) {
  ((QFileDialog*)this_)->setLabelText(label, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:176
// [8] QString labelText(QFileDialog::DialogLabel)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog9labelTextENS_11DialogLabelE(void *this_, QFileDialog::DialogLabel label) {
  auto rv = ((QFileDialog*)this_)->labelText(label);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:178
// [-2] void setSupportedSchemes(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog19setSupportedSchemesERK11QStringList(void *this_, QStringList* schemes) {
  ((QFileDialog*)this_)->setSupportedSchemes(*schemes);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:179
// [8] QStringList supportedSchemes()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog16supportedSchemesEv(void *this_) {
  auto rv = ((QFileDialog*)this_)->supportedSchemes();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qfiledialog.h:182
// [-2] void setProxyModel(QAbstractProxyModel *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog13setProxyModelEP19QAbstractProxyModel(void *this_, QAbstractProxyModel * model) {
  ((QFileDialog*)this_)->setProxyModel(model);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:183
// [8] QAbstractProxyModel * proxyModel()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDialog10proxyModelEv(void *this_) {
  return (void*)((QFileDialog*)this_)->proxyModel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:186
// [-2] void setOption(QFileDialog::Option, bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog9setOptionENS_6OptionEb(void *this_, QFileDialog::Option option, bool on) {
  ((QFileDialog*)this_)->setOption(option, on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:187
// [1] bool testOption(QFileDialog::Option)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFileDialog10testOptionENS_6OptionE(void *this_, QFileDialog::Option option) {
  return (bool)((QFileDialog*)this_)->testOption(option);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:188
// [-2] void setOptions(QFileDialog::Options)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog10setOptionsE6QFlagsINS_6OptionEE(void *this_, QFlags<QFileDialog::Option> options) {
  ((QFileDialog*)this_)->setOptions(options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:189
// [4] QFileDialog::Options options()
extern "C" Q_DECL_EXPORT
QFileDialog::Options* C_ZNK11QFileDialog7optionsEv(void *this_) {
  auto rv = ((QFileDialog*)this_)->options();
return new QFileDialog::Options(rv);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qfiledialog.h:192
// [-2] void open(QObject *, const char *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QFileDialog*)this_)->open(receiver, member);
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:193
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog10setVisibleEb(void *this_, bool visible) {
  ((QFileDialog*)this_)->setVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:196
// [-2] void fileSelected(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog12fileSelectedERK7QString(void *this_, QString* file) {
  ((QFileDialog*)this_)->fileSelected(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:197
// [-2] void filesSelected(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog13filesSelectedERK11QStringList(void *this_, QStringList* files) {
  ((QFileDialog*)this_)->filesSelected(*files);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:198
// [-2] void currentChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog14currentChangedERK7QString(void *this_, QString* path) {
  ((QFileDialog*)this_)->currentChanged(*path);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qfiledialog.h:199
// [-2] void directoryEntered(const QString &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog16directoryEnteredERK7QString(void *this_, QString* directory) {
  ((QFileDialog*)this_)->directoryEntered(*directory);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qfiledialog.h:201
// [-2] void urlSelected(const QUrl &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog11urlSelectedERK4QUrl(void *this_, QUrl* url) {
  ((QFileDialog*)this_)->urlSelected(*url);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qfiledialog.h:203
// [-2] void currentUrlChanged(const QUrl &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog17currentUrlChangedERK4QUrl(void *this_, QUrl* url) {
  ((QFileDialog*)this_)->currentUrlChanged(*url);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qfiledialog.h:204
// [-2] void directoryUrlEntered(const QUrl &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog19directoryUrlEnteredERK4QUrl(void *this_, QUrl* directory) {
  ((QFileDialog*)this_)->directoryUrlEntered(*directory);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qfiledialog.h:206
// [-2] void filterSelected(const QString &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDialog14filterSelectedERK7QString(void *this_, QString* filter) {
  ((QFileDialog*)this_)->filterSelected(*filter);
}
#endif // QT_VERSION >= 0x040300

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:210
// [8] QString getOpenFileName(QWidget *, const QString &, const QString &, const QString &, QString *, QFileDialog::Options)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDialog15getOpenFileNameEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE(QWidget * parent, QString* caption, QString* dir, QString* filter, QString * selectedFilter, QFlags<QFileDialog::Option> options) {
  auto rv = QFileDialog::getOpenFileName(parent, *caption, *dir, *filter, selectedFilter, options);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:217
// [8] QUrl getOpenFileUrl(QWidget *, const QString &, const QUrl &, const QString &, QString *, QFileDialog::Options, const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDialog14getOpenFileUrlEP7QWidgetRK7QStringRK4QUrlS4_PS2_6QFlagsINS_6OptionEERK11QStringList(QWidget * parent, QString* caption, QUrl* dir, QString* filter, QString * selectedFilter, QFlags<QFileDialog::Option> options, QStringList* supportedSchemes) {
  auto rv = QFileDialog::getOpenFileUrl(parent, *caption, *dir, *filter, selectedFilter, options, *supportedSchemes);
return new QUrl(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:225
// [8] QString getSaveFileName(QWidget *, const QString &, const QString &, const QString &, QString *, QFileDialog::Options)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDialog15getSaveFileNameEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE(QWidget * parent, QString* caption, QString* dir, QString* filter, QString * selectedFilter, QFlags<QFileDialog::Option> options) {
  auto rv = QFileDialog::getSaveFileName(parent, *caption, *dir, *filter, selectedFilter, options);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:232
// [8] QUrl getSaveFileUrl(QWidget *, const QString &, const QUrl &, const QString &, QString *, QFileDialog::Options, const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDialog14getSaveFileUrlEP7QWidgetRK7QStringRK4QUrlS4_PS2_6QFlagsINS_6OptionEERK11QStringList(QWidget * parent, QString* caption, QUrl* dir, QString* filter, QString * selectedFilter, QFlags<QFileDialog::Option> options, QStringList* supportedSchemes) {
  auto rv = QFileDialog::getSaveFileUrl(parent, *caption, *dir, *filter, selectedFilter, options, *supportedSchemes);
return new QUrl(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:240
// [8] QString getExistingDirectory(QWidget *, const QString &, const QString &, QFileDialog::Options)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDialog20getExistingDirectoryEP7QWidgetRK7QStringS4_6QFlagsINS_6OptionEE(QWidget * parent, QString* caption, QString* dir, QFlags<QFileDialog::Option> options) {
  auto rv = QFileDialog::getExistingDirectory(parent, *caption, *dir, options);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:245
// [8] QUrl getExistingDirectoryUrl(QWidget *, const QString &, const QUrl &, QFileDialog::Options, const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDialog23getExistingDirectoryUrlEP7QWidgetRK7QStringRK4QUrl6QFlagsINS_6OptionEERK11QStringList(QWidget * parent, QString* caption, QUrl* dir, QFlags<QFileDialog::Option> options, QStringList* supportedSchemes) {
  auto rv = QFileDialog::getExistingDirectoryUrl(parent, *caption, *dir, options, *supportedSchemes);
return new QUrl(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:251
// [8] QStringList getOpenFileNames(QWidget *, const QString &, const QString &, const QString &, QString *, QFileDialog::Options)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDialog16getOpenFileNamesEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE(QWidget * parent, QString* caption, QString* dir, QString* filter, QString * selectedFilter, QFlags<QFileDialog::Option> options) {
  auto rv = QFileDialog::getOpenFileNames(parent, *caption, *dir, *filter, selectedFilter, options);
return new QStringList(rv);
}

//  main block end
