//  header block begin
// /usr/include/qt/QtWidgets/qdialog.h
#include <qdialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDialog is pure virtual: false
// QDialog has virtual projected: true
//  header block end

//  main block begin

class MyQDialog : public QDialog {
public:
  virtual ~MyQDialog() {}
// void QDialog(class QWidget *, Qt::WindowFlags)
MyQDialog(QWidget * parent, QFlags<Qt::WindowType> f) : QDialog(parent, f) {}
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDialog::keyPressEvent(arg0);
  }
  }
// void closeEvent(class QCloseEvent *)
  virtual void closeEvent(QCloseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDialog::closeEvent(arg0);
  }
  }
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDialog::showEvent(arg0);
  }
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDialog::resizeEvent(arg0);
  }
  }
// void contextMenuEvent(class QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDialog::contextMenuEvent(arg0);
  }
  }
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QDialog::eventFilter(arg0, arg1);
  }
  }
// void adjustPosition(class QWidget *)
  virtual void adjustPosition(QWidget * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"adjustPosition", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDialog::adjustPosition(arg0);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK7QDialog10metaObjectEv(void *this_) {
  return (void*)((QDialog*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:63
// [-2] void QDialog(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN7QDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQDialog*)(0);
  return  new MyQDialog(parent, f);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:64
// [-2] void ~QDialog()
extern "C"
void C_ZN7QDialogD2Ev(void *this_) {
  delete (QDialog*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:68
// [4] int result()
extern "C"
int C_ZNK7QDialog6resultEv(void *this_) {
  return (int)((QDialog*)this_)->result();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:70
// [-2] void setVisible(_Bool)
extern "C"
void C_ZN7QDialog10setVisibleEb(void *this_, bool visible) {
  ((QDialog*)this_)->setVisible(visible);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:72
// [-2] void setOrientation(Qt::Orientation)
extern "C"
void C_ZN7QDialog14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QDialog*)this_)->setOrientation(orientation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:73
// [4] Qt::Orientation orientation()
extern "C"
Qt::Orientation C_ZNK7QDialog11orientationEv(void *this_) {
  return (Qt::Orientation)((QDialog*)this_)->orientation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:75
// [-2] void setExtension(class QWidget *)
extern "C"
void C_ZN7QDialog12setExtensionEP7QWidget(void *this_, QWidget * extension) {
  ((QDialog*)this_)->setExtension(extension);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:76
// [8] QWidget * extension()
extern "C"
void* C_ZNK7QDialog9extensionEv(void *this_) {
  return (void*)((QDialog*)this_)->extension();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:78
// [8] QSize sizeHint()
extern "C"
void* C_ZNK7QDialog8sizeHintEv(void *this_) {
  auto rv = ((QDialog*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:79
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK7QDialog15minimumSizeHintEv(void *this_) {
  auto rv = ((QDialog*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:81
// [-2] void setSizeGripEnabled(_Bool)
extern "C"
void C_ZN7QDialog18setSizeGripEnabledEb(void *this_, bool arg0) {
  ((QDialog*)this_)->setSizeGripEnabled(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:82
// [1] bool isSizeGripEnabled()
extern "C"
bool C_ZNK7QDialog17isSizeGripEnabledEv(void *this_) {
  return (bool)((QDialog*)this_)->isSizeGripEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:84
// [-2] void setModal(_Bool)
extern "C"
void C_ZN7QDialog8setModalEb(void *this_, bool modal) {
  ((QDialog*)this_)->setModal(modal);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:85
// [-2] void setResult(int)
extern "C"
void C_ZN7QDialog9setResultEi(void *this_, int r) {
  ((QDialog*)this_)->setResult(r);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:88
// [-2] void finished(int)
extern "C"
void C_ZN7QDialog8finishedEi(void *this_, int result) {
  ((QDialog*)this_)->finished(result);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:89
// [-2] void accepted()
extern "C"
void C_ZN7QDialog8acceptedEv(void *this_) {
  ((QDialog*)this_)->accepted();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:90
// [-2] void rejected()
extern "C"
void C_ZN7QDialog8rejectedEv(void *this_) {
  ((QDialog*)this_)->rejected();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:93
// [-2] void open()
extern "C"
void C_ZN7QDialog4openEv(void *this_) {
  ((QDialog*)this_)->open();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:94
// [4] int exec()
extern "C"
int C_ZN7QDialog4execEv(void *this_) {
  return (int)((QDialog*)this_)->exec();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:95
// [-2] void done(int)
extern "C"
void C_ZN7QDialog4doneEi(void *this_, int arg0) {
  ((QDialog*)this_)->done(arg0);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:96
// [-2] void accept()
extern "C"
void C_ZN7QDialog6acceptEv(void *this_) {
  ((QDialog*)this_)->accept();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:97
// [-2] void reject()
extern "C"
void C_ZN7QDialog6rejectEv(void *this_) {
  ((QDialog*)this_)->reject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:99
// [-2] void showExtension(_Bool)
extern "C"
void C_ZN7QDialog13showExtensionEb(void *this_, bool arg0) {
  ((QDialog*)this_)->showExtension(arg0);
}
//  main block end
