//  header block begin
// /usr/include/qt/QtWidgets/qabstractspinbox.h
#include <qabstractspinbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractSpinBox is pure virtual: false
// QAbstractSpinBox has virtual projected: true
//  header block end

//  main block begin

class MyQAbstractSpinBox : public QAbstractSpinBox {
public:
  virtual ~MyQAbstractSpinBox() {}
// void QAbstractSpinBox(class QWidget *)
MyQAbstractSpinBox(QWidget * parent) : QAbstractSpinBox(parent) {}
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::resizeEvent(event);
  }
  }

// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::keyPressEvent(event);
  }
  }

// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::keyReleaseEvent(event);
  }
  }

// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::wheelEvent(event);
  }
  }

// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::focusInEvent(event);
  }
  }

// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::focusOutEvent(event);
  }
  }

// void contextMenuEvent(class QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::contextMenuEvent(event);
  }
  }

// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::changeEvent(event);
  }
  }

// void closeEvent(class QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::closeEvent(event);
  }
  }

// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::hideEvent(event);
  }
  }

// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::mousePressEvent(event);
  }
  }

// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::mouseReleaseEvent(event);
  }
  }

// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::mouseMoveEvent(event);
  }
  }

// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::timerEvent(event);
  }
  }

// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::paintEvent(event);
  }
  }

// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::showEvent(event);
  }
  }

// void initStyleOption(class QStyleOptionSpinBox *)
  virtual void initStyleOption(QStyleOptionSpinBox * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::initStyleOption(option);
  }
  }

// QLineEdit * lineEdit()
  virtual QLineEdit * lineEdit() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"lineEdit", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QLineEdit *)(irv);
      // PointerPointerQLineEdit *
    } else {
    return QAbstractSpinBox::lineEdit();
  }
  }

// void setLineEdit(class QLineEdit *)
  virtual void setLineEdit(QLineEdit * edit) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setLineEdit", &handled, 1, (uint64_t)edit, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSpinBox::setLineEdit(edit);
  }
  }

// QAbstractSpinBox::StepEnabled stepEnabled()
  virtual QAbstractSpinBox::StepEnabled stepEnabled() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"stepEnabled", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractSpinBox::StepEnabled)(int)(irv);
      // TypedefRecordQFlags<QAbstractSpinBox::StepEnabledFlag>
    } else {
    return QAbstractSpinBox::stepEnabled();
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:58
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK16QAbstractSpinBox10metaObjectEv(void *this_) {
  return (void*)((QAbstractSpinBox*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:73
// [-2] void QAbstractSpinBox(class QWidget *)
extern "C"
void* C_ZN16QAbstractSpinBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractSpinBox*)(0);
  return 0; // new MyQAbstractSpinBox(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:74
// [-2] void ~QAbstractSpinBox()
extern "C"
void C_ZN16QAbstractSpinBoxD2Ev(void *this_) {
  delete (QAbstractSpinBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:83
// [4] QAbstractSpinBox::ButtonSymbols buttonSymbols()
extern "C"
QAbstractSpinBox::ButtonSymbols C_ZNK16QAbstractSpinBox13buttonSymbolsEv(void *this_) {
  return (QAbstractSpinBox::ButtonSymbols)((QAbstractSpinBox*)this_)->buttonSymbols();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:84
// [-2] void setButtonSymbols(enum QAbstractSpinBox::ButtonSymbols)
extern "C"
void C_ZN16QAbstractSpinBox16setButtonSymbolsENS_13ButtonSymbolsE(void *this_, QAbstractSpinBox::ButtonSymbols bs) {
  ((QAbstractSpinBox*)this_)->setButtonSymbols(bs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:89
// [-2] void setCorrectionMode(enum QAbstractSpinBox::CorrectionMode)
extern "C"
void C_ZN16QAbstractSpinBox17setCorrectionModeENS_14CorrectionModeE(void *this_, QAbstractSpinBox::CorrectionMode cm) {
  ((QAbstractSpinBox*)this_)->setCorrectionMode(cm);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:90
// [4] QAbstractSpinBox::CorrectionMode correctionMode()
extern "C"
QAbstractSpinBox::CorrectionMode C_ZNK16QAbstractSpinBox14correctionModeEv(void *this_) {
  return (QAbstractSpinBox::CorrectionMode)((QAbstractSpinBox*)this_)->correctionMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:92
// [1] bool hasAcceptableInput()
extern "C"
bool C_ZNK16QAbstractSpinBox18hasAcceptableInputEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->hasAcceptableInput();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:93
// [8] QString text()
extern "C"
void* C_ZNK16QAbstractSpinBox4textEv(void *this_) {
  auto rv = ((QAbstractSpinBox*)this_)->text();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:95
// [8] QString specialValueText()
extern "C"
void* C_ZNK16QAbstractSpinBox16specialValueTextEv(void *this_) {
  auto rv = ((QAbstractSpinBox*)this_)->specialValueText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:96
// [-2] void setSpecialValueText(const class QString &)
extern "C"
void C_ZN16QAbstractSpinBox19setSpecialValueTextERK7QString(void *this_, QString* txt) {
  ((QAbstractSpinBox*)this_)->setSpecialValueText(*txt);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:98
// [1] bool wrapping()
extern "C"
bool C_ZNK16QAbstractSpinBox8wrappingEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->wrapping();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:99
// [-2] void setWrapping(_Bool)
extern "C"
void C_ZN16QAbstractSpinBox11setWrappingEb(void *this_, bool w) {
  ((QAbstractSpinBox*)this_)->setWrapping(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:101
// [-2] void setReadOnly(_Bool)
extern "C"
void C_ZN16QAbstractSpinBox11setReadOnlyEb(void *this_, bool r) {
  ((QAbstractSpinBox*)this_)->setReadOnly(r);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:102
// [1] bool isReadOnly()
extern "C"
bool C_ZNK16QAbstractSpinBox10isReadOnlyEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->isReadOnly();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:104
// [-2] void setKeyboardTracking(_Bool)
extern "C"
void C_ZN16QAbstractSpinBox19setKeyboardTrackingEb(void *this_, bool kt) {
  ((QAbstractSpinBox*)this_)->setKeyboardTracking(kt);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:105
// [1] bool keyboardTracking()
extern "C"
bool C_ZNK16QAbstractSpinBox16keyboardTrackingEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->keyboardTracking();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:107
// [-2] void setAlignment(Qt::Alignment)
extern "C"
void C_ZN16QAbstractSpinBox12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> flag) {
  ((QAbstractSpinBox*)this_)->setAlignment(flag);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:108
// [4] Qt::Alignment alignment()
extern "C"
Qt::Alignment C_ZNK16QAbstractSpinBox9alignmentEv(void *this_) {
  return (Qt::Alignment)((QAbstractSpinBox*)this_)->alignment();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:110
// [-2] void setFrame(_Bool)
extern "C"
void C_ZN16QAbstractSpinBox8setFrameEb(void *this_, bool arg0) {
  ((QAbstractSpinBox*)this_)->setFrame(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:111
// [1] bool hasFrame()
extern "C"
bool C_ZNK16QAbstractSpinBox8hasFrameEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->hasFrame();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:113
// [-2] void setAccelerated(_Bool)
extern "C"
void C_ZN16QAbstractSpinBox14setAcceleratedEb(void *this_, bool on) {
  ((QAbstractSpinBox*)this_)->setAccelerated(on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:114
// [1] bool isAccelerated()
extern "C"
bool C_ZNK16QAbstractSpinBox13isAcceleratedEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->isAccelerated();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:116
// [-2] void setGroupSeparatorShown(_Bool)
extern "C"
void C_ZN16QAbstractSpinBox22setGroupSeparatorShownEb(void *this_, bool shown) {
  ((QAbstractSpinBox*)this_)->setGroupSeparatorShown(shown);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:117
// [1] bool isGroupSeparatorShown()
extern "C"
bool C_ZNK16QAbstractSpinBox21isGroupSeparatorShownEv(void *this_) {
  return (bool)((QAbstractSpinBox*)this_)->isGroupSeparatorShown();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:119
// [8] QSize sizeHint()
extern "C"
void* C_ZNK16QAbstractSpinBox8sizeHintEv(void *this_) {
  auto rv = ((QAbstractSpinBox*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:120
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK16QAbstractSpinBox15minimumSizeHintEv(void *this_) {
  auto rv = ((QAbstractSpinBox*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:121
// [-2] void interpretText()
extern "C"
void C_ZN16QAbstractSpinBox13interpretTextEv(void *this_) {
  ((QAbstractSpinBox*)this_)->interpretText();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:122
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN16QAbstractSpinBox5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QAbstractSpinBox*)this_)->event(event);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:124
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C"
void* C_ZNK16QAbstractSpinBox16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery arg0) {
  auto rv = ((QAbstractSpinBox*)this_)->inputMethodQuery(arg0);
return new QVariant(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:126
// [4] QValidator::State validate(class QString &, int &)
extern "C"
QValidator::State C_ZNK16QAbstractSpinBox8validateER7QStringRi(void *this_, QString* input, int & pos) {
  return (QValidator::State)((QAbstractSpinBox*)this_)->validate(*input, pos);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:127
// [-2] void fixup(class QString &)
extern "C"
void C_ZNK16QAbstractSpinBox5fixupER7QString(void *this_, QString* input) {
  ((QAbstractSpinBox*)this_)->fixup(*input);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:129
// [-2] void stepBy(int)
extern "C"
void C_ZN16QAbstractSpinBox6stepByEi(void *this_, int steps) {
  ((QAbstractSpinBox*)this_)->stepBy(steps);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:131
// [-2] void stepUp()
extern "C"
void C_ZN16QAbstractSpinBox6stepUpEv(void *this_) {
  ((QAbstractSpinBox*)this_)->stepUp();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:132
// [-2] void stepDown()
extern "C"
void C_ZN16QAbstractSpinBox8stepDownEv(void *this_) {
  ((QAbstractSpinBox*)this_)->stepDown();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:133
// [-2] void selectAll()
extern "C"
void C_ZN16QAbstractSpinBox9selectAllEv(void *this_) {
  ((QAbstractSpinBox*)this_)->selectAll();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:134
// [-2] void clear()
extern "C"
void C_ZN16QAbstractSpinBox5clearEv(void *this_) {
  ((QAbstractSpinBox*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:163
// [-2] void editingFinished()
extern "C"
void C_ZN16QAbstractSpinBox15editingFinishedEv(void *this_) {
  ((QAbstractSpinBox*)this_)->editingFinished();
}
//  main block end
