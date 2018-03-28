//  header block begin
// /usr/include/qt/QtWidgets/qdialog.h
#ifndef protected
#define protected public
#endif
#include <qdialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDialog is pure virtual: false
// QDialog has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDialog : public QDialog {
public:
  virtual ~MyQDialog() {}
// void QDialog(QWidget *, Qt::WindowFlags)
MyQDialog(QWidget * parent, QFlags<Qt::WindowType> f) : QDialog(parent, f) {}
// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDialog::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void closeEvent(QCloseEvent *)
  virtual void closeEvent(QCloseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDialog::closeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDialog::showEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDialog::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDialog::contextMenuEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool eventFilter(QObject *, QEvent *)
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

// Protected Visibility=Default Availability=Available
// void adjustPosition(QWidget *)
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:104
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QDialog*)this_)->QDialog::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:105
// [-2] void closeEvent(QCloseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog10closeEventEP11QCloseEvent(void *this_, QCloseEvent * arg0) {
  ((QDialog*)this_)->QDialog::closeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:106
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QDialog*)this_)->QDialog::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:107
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QDialog*)this_)->QDialog::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:109
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * arg0) {
  ((QDialog*)this_)->QDialog::contextMenuEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:111
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QDialog11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QDialog*)this_)->QDialog::eventFilter(arg0, arg1);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:112
// [-2] void adjustPosition(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog14adjustPositionEP7QWidget(void *this_, QWidget * arg0) {
  ((QDialog*)this_)->QDialog::adjustPosition(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QDialog10metaObjectEv(void *this_) {
  return (void*)((QDialog*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:63
// [-2] void QDialog(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN7QDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQDialog*)(0);
  return  new MyQDialog(parent, f);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:64
// [-2] void ~QDialog()
extern "C" Q_DECL_EXPORT
void C_ZN7QDialogD2Ev(void *this_) {
  delete (QDialog*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:68
// [4] int result()
extern "C" Q_DECL_EXPORT
int C_ZNK7QDialog6resultEv(void *this_) {
  return (int)((QDialog*)this_)->result();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:70
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog10setVisibleEb(void *this_, bool visible) {
  ((QDialog*)this_)->setVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:72
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QDialog*)this_)->setOrientation(orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:73
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK7QDialog11orientationEv(void *this_) {
  return (Qt::Orientation)((QDialog*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:75
// [-2] void setExtension(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog12setExtensionEP7QWidget(void *this_, QWidget * extension) {
  ((QDialog*)this_)->setExtension(extension);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:76
// [8] QWidget * extension()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QDialog9extensionEv(void *this_) {
  return (void*)((QDialog*)this_)->extension();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:78
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QDialog8sizeHintEv(void *this_) {
  auto rv = ((QDialog*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:79
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QDialog15minimumSizeHintEv(void *this_) {
  auto rv = ((QDialog*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:81
// [-2] void setSizeGripEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog18setSizeGripEnabledEb(void *this_, bool arg0) {
  ((QDialog*)this_)->setSizeGripEnabled(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:82
// [1] bool isSizeGripEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QDialog17isSizeGripEnabledEv(void *this_) {
  return (bool)((QDialog*)this_)->isSizeGripEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:84
// [-2] void setModal(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog8setModalEb(void *this_, bool modal) {
  ((QDialog*)this_)->setModal(modal);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:85
// [-2] void setResult(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog9setResultEi(void *this_, int r) {
  ((QDialog*)this_)->setResult(r);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qdialog.h:88
// [-2] void finished(int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog8finishedEi(void *this_, int result) {
  ((QDialog*)this_)->finished(result);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qdialog.h:89
// [-2] void accepted()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog8acceptedEv(void *this_) {
  ((QDialog*)this_)->accepted();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qdialog.h:90
// [-2] void rejected()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog8rejectedEv(void *this_) {
  ((QDialog*)this_)->rejected();
}
#endif // QT_VERSION >= 0x040100

// Public virtual Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qdialog.h:93
// [-2] void open()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog4openEv(void *this_) {
  ((QDialog*)this_)->open();
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:94
// [4] int exec()
extern "C" Q_DECL_EXPORT
int C_ZN7QDialog4execEv(void *this_) {
  return (int)((QDialog*)this_)->exec();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:95
// [-2] void done(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog4doneEi(void *this_, int arg0) {
  ((QDialog*)this_)->done(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:96
// [-2] void accept()
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog6acceptEv(void *this_) {
  ((QDialog*)this_)->accept();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:97
// [-2] void reject()
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog6rejectEv(void *this_) {
  ((QDialog*)this_)->reject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialog.h:99
// [-2] void showExtension(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QDialog13showExtensionEb(void *this_, bool arg0) {
  ((QDialog*)this_)->showExtension(arg0);
}

//  main block end
