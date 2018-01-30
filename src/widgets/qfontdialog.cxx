//  header block begin
// /usr/include/qt/QtWidgets/qfontdialog.h
#include <qfontdialog.h>
#include <QtWidgets>

// QFontDialog is pure virtual: false
// QFontDialog has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:103
// [-2] void changeEvent(class QEvent *)
extern "C"
void* callback_ZN11QFontDialog11changeEventEP6QEvent = 0;
extern "C" void set_callback_ZN11QFontDialog11changeEventEP6QEvent(void*cbfn)
{ callback_ZN11QFontDialog11changeEventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:104
// [-2] void done(int)
extern "C"
void* callback_ZN11QFontDialog4doneEi = 0;
extern "C" void set_callback_ZN11QFontDialog4doneEi(void*cbfn)
{ callback_ZN11QFontDialog4doneEi = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:105
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C"
void* callback_ZN11QFontDialog11eventFilterEP7QObjectP6QEvent = 0;
extern "C" void set_callback_ZN11QFontDialog11eventFilterEP7QObjectP6QEvent(void*cbfn)
{ callback_ZN11QFontDialog11eventFilterEP7QObjectP6QEvent = cbfn; }

class MyQFontDialog : public QFontDialog {
public:
  virtual ~MyQFontDialog() {}
// void QFontDialog(class QWidget *)
MyQFontDialog(QWidget * parent) : QFontDialog(parent) {}
// void QFontDialog(const class QFont &, class QWidget *)
MyQFontDialog(const QFont & initial, QWidget * parent) : QFontDialog(initial, parent) {}
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * event) {
    if (callback_ZN11QFontDialog11changeEventEP6QEvent != 0) {
      // callback_ZN11QFontDialog11changeEventEP6QEvent(event);
    }
    QFontDialog::changeEvent(event);
  }
// void done(int)
  virtual void done(int result) {
    if (callback_ZN11QFontDialog4doneEi != 0) {
      // callback_ZN11QFontDialog4doneEi(result);
    }
    QFontDialog::done(result);
  }
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event) {
    if (callback_ZN11QFontDialog11eventFilterEP7QObjectP6QEvent != 0) {
      // callback_ZN11QFontDialog11eventFilterEP7QObjectP6QEvent(object, event);
    }
    return QFontDialog::eventFilter(object, event);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QFontDialog10metaObjectEv(void *this_) {
  return (void*)((QFontDialog*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:75
// [-2] void QFontDialog(class QWidget *)
extern "C"
void* C_ZN11QFontDialogC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQFontDialog*)(0);
  return  new MyQFontDialog(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:76
// [-2] void QFontDialog(const class QFont &, class QWidget *)
extern "C"
void* C_ZN11QFontDialogC2ERK5QFontP7QWidget(const QFont & initial, QWidget * parent) {
  auto _nilp = (MyQFontDialog*)(0);
  return  new MyQFontDialog(initial, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:77
// [-2] void ~QFontDialog()
extern "C"
void C_ZN11QFontDialogD2Ev(void *this_) {
  delete (QFontDialog*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:79
// [-2] void setCurrentFont(const class QFont &)
extern "C"
void C_ZN11QFontDialog14setCurrentFontERK5QFont(void *this_, const QFont & font) {
  ((QFontDialog*)this_)->setCurrentFont(font);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:80
// [16] QFont currentFont()
extern "C"
void* C_ZNK11QFontDialog11currentFontEv(void *this_) {
  auto rv = ((QFontDialog*)this_)->currentFont();
return new QFont(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:82
// [16] QFont selectedFont()
extern "C"
void* C_ZNK11QFontDialog12selectedFontEv(void *this_) {
  auto rv = ((QFontDialog*)this_)->selectedFont();
return new QFont(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:84
// [-2] void setOption(enum QFontDialog::FontDialogOption, _Bool)
extern "C"
void C_ZN11QFontDialog9setOptionENS_16FontDialogOptionEb(void *this_, QFontDialog::FontDialogOption option, bool on) {
  ((QFontDialog*)this_)->setOption(option, on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:85
// [1] bool testOption(enum QFontDialog::FontDialogOption)
extern "C"
bool C_ZNK11QFontDialog10testOptionENS_16FontDialogOptionE(void *this_, QFontDialog::FontDialogOption option) {
  return (bool)((QFontDialog*)this_)->testOption(option);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:87
// [4] QFontDialog::FontDialogOptions options()
extern "C"
void C_ZNK11QFontDialog7optionsEv(void *this_) {
  auto rv = ((QFontDialog*)this_)->options();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:90
// [-2] void open(class QObject *, const char *)
extern "C"
void C_ZN11QFontDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QFontDialog*)this_)->open(receiver, member);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:92
// [-2] void setVisible(_Bool)
extern "C"
void C_ZN11QFontDialog10setVisibleEb(void *this_, bool visible) {
  ((QFontDialog*)this_)->setVisible(visible);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:94
// [16] QFont getFont(_Bool *, class QWidget *)
extern "C"
void* C_ZN11QFontDialog7getFontEPbP7QWidget(bool * ok, QWidget * parent) {
  auto rv = QFontDialog::getFont(ok, parent);
return new QFont(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:99
// [-2] void currentFontChanged(const class QFont &)
extern "C"
void C_ZN11QFontDialog18currentFontChangedERK5QFont(void *this_, const QFont & font) {
  ((QFontDialog*)this_)->currentFontChanged(font);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:100
// [-2] void fontSelected(const class QFont &)
extern "C"
void C_ZN11QFontDialog12fontSelectedERK5QFont(void *this_, const QFont & font) {
  ((QFontDialog*)this_)->fontSelected(font);
}
//  main block end
