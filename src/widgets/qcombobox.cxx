//  header block begin
// /usr/include/qt/QtWidgets/qcombobox.h
#ifndef protected
#define protected public
#endif
#include <qcombobox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QComboBox is pure virtual: false
// QComboBox has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQComboBox : public QComboBox {
public:
  virtual ~MyQComboBox() {}
// void QComboBox(QWidget *)
MyQComboBox(QWidget * parent) : QComboBox(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::focusInEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::focusOutEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::changeEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::resizeEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::paintEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::showEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::hideEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::mousePressEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::mouseReleaseEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::keyPressEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::keyReleaseEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::wheelEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::contextMenuEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void inputMethodEvent(QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::inputMethodEvent(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// void initStyleOption(QStyleOptionComboBox *)
  virtual void initStyleOption(QStyleOptionComboBox * option) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QComboBox::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:227
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * e) {
  ((QComboBox*)this_)->QComboBox::focusInEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:228
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * e) {
  ((QComboBox*)this_)->QComboBox::focusOutEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:229
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11changeEventEP6QEvent(void *this_, QEvent * e) {
  ((QComboBox*)this_)->QComboBox::changeEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:230
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * e) {
  ((QComboBox*)this_)->QComboBox::resizeEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:231
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox10paintEventEP11QPaintEvent(void *this_, QPaintEvent * e) {
  ((QComboBox*)this_)->QComboBox::paintEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:232
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox9showEventEP10QShowEvent(void *this_, QShowEvent * e) {
  ((QComboBox*)this_)->QComboBox::showEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:233
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox9hideEventEP10QHideEvent(void *this_, QHideEvent * e) {
  ((QComboBox*)this_)->QComboBox::hideEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:234
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QComboBox*)this_)->QComboBox::mousePressEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:235
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QComboBox*)this_)->QComboBox::mouseReleaseEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:236
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * e) {
  ((QComboBox*)this_)->QComboBox::keyPressEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:237
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * e) {
  ((QComboBox*)this_)->QComboBox::keyReleaseEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:239
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * e) {
  ((QComboBox*)this_)->QComboBox::wheelEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:242
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * e) {
  ((QComboBox*)this_)->QComboBox::contextMenuEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:244
// [-2] void inputMethodEvent(QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * arg0) {
  ((QComboBox*)this_)->QComboBox::inputMethodEvent(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:245
// [-2] void initStyleOption(QStyleOptionComboBox *)
extern "C" Q_DECL_EXPORT
void C_ZNK9QComboBox15initStyleOptionEP20QStyleOptionComboBox(void *this_, QStyleOptionComboBox * option) {
  ((QComboBox*)this_)->QComboBox::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox10metaObjectEv(void *this_) {
  return (void*)((QComboBox*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:85
// [-2] void QComboBox(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QComboBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQComboBox*)(0);
  return  new MyQComboBox(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:86
// [-2] void ~QComboBox()
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBoxD2Ev(void *this_) {
  delete (QComboBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:88
// [4] int maxVisibleItems()
extern "C" Q_DECL_EXPORT
int C_ZNK9QComboBox15maxVisibleItemsEv(void *this_) {
  return (int)((QComboBox*)this_)->maxVisibleItems();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:89
// [-2] void setMaxVisibleItems(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox18setMaxVisibleItemsEi(void *this_, int maxItems) {
  ((QComboBox*)this_)->setMaxVisibleItems(maxItems);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:91
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK9QComboBox5countEv(void *this_) {
  return (int)((QComboBox*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:92
// [-2] void setMaxCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11setMaxCountEi(void *this_, int max) {
  ((QComboBox*)this_)->setMaxCount(max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:93
// [4] int maxCount()
extern "C" Q_DECL_EXPORT
int C_ZNK9QComboBox8maxCountEv(void *this_) {
  return (int)((QComboBox*)this_)->maxCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:96
// [1] bool autoCompletion()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QComboBox14autoCompletionEv(void *this_) {
  return (bool)((QComboBox*)this_)->autoCompletion();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:97
// [-2] void setAutoCompletion(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox17setAutoCompletionEb(void *this_, bool enable) {
  ((QComboBox*)this_)->setAutoCompletion(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:99
// [4] Qt::CaseSensitivity autoCompletionCaseSensitivity()
extern "C" Q_DECL_EXPORT
Qt::CaseSensitivity C_ZNK9QComboBox29autoCompletionCaseSensitivityEv(void *this_) {
  return (Qt::CaseSensitivity)((QComboBox*)this_)->autoCompletionCaseSensitivity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:100
// [-2] void setAutoCompletionCaseSensitivity(Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox32setAutoCompletionCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity sensitivity) {
  ((QComboBox*)this_)->setAutoCompletionCaseSensitivity(sensitivity);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:103
// [1] bool duplicatesEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QComboBox17duplicatesEnabledEv(void *this_) {
  return (bool)((QComboBox*)this_)->duplicatesEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:104
// [-2] void setDuplicatesEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox20setDuplicatesEnabledEb(void *this_, bool enable) {
  ((QComboBox*)this_)->setDuplicatesEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:106
// [-2] void setFrame(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox8setFrameEb(void *this_, bool arg0) {
  ((QComboBox*)this_)->setFrame(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:107
// [1] bool hasFrame()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QComboBox8hasFrameEv(void *this_) {
  return (bool)((QComboBox*)this_)->hasFrame();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:109
// [4] int findText(const QString &, Qt::MatchFlags)
extern "C" Q_DECL_EXPORT
int C_ZNK9QComboBox8findTextERK7QString6QFlagsIN2Qt9MatchFlagEE(void *this_, QString* text, QFlags<Qt::MatchFlag> flags) {
  return (int)((QComboBox*)this_)->findText(*text, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:112
// [4] int findData(const QVariant &, int, Qt::MatchFlags)
extern "C" Q_DECL_EXPORT
int C_ZNK9QComboBox8findDataERK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void *this_, QVariant* data, int role, QFlags<Qt::MatchFlag> flags) {
  return (int)((QComboBox*)this_)->findData(*data, role, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:126
// [4] QComboBox::InsertPolicy insertPolicy()
extern "C" Q_DECL_EXPORT
QComboBox::InsertPolicy C_ZNK9QComboBox12insertPolicyEv(void *this_) {
  return (QComboBox::InsertPolicy)((QComboBox*)this_)->insertPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:127
// [-2] void setInsertPolicy(QComboBox::InsertPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox15setInsertPolicyENS_12InsertPolicyE(void *this_, QComboBox::InsertPolicy policy) {
  ((QComboBox*)this_)->setInsertPolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:137
// [4] QComboBox::SizeAdjustPolicy sizeAdjustPolicy()
extern "C" Q_DECL_EXPORT
QComboBox::SizeAdjustPolicy C_ZNK9QComboBox16sizeAdjustPolicyEv(void *this_) {
  return (QComboBox::SizeAdjustPolicy)((QComboBox*)this_)->sizeAdjustPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:138
// [-2] void setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox19setSizeAdjustPolicyENS_16SizeAdjustPolicyE(void *this_, QComboBox::SizeAdjustPolicy policy) {
  ((QComboBox*)this_)->setSizeAdjustPolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:139
// [4] int minimumContentsLength()
extern "C" Q_DECL_EXPORT
int C_ZNK9QComboBox21minimumContentsLengthEv(void *this_) {
  return (int)((QComboBox*)this_)->minimumContentsLength();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:140
// [-2] void setMinimumContentsLength(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox24setMinimumContentsLengthEi(void *this_, int characters) {
  ((QComboBox*)this_)->setMinimumContentsLength(characters);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:141
// [8] QSize iconSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox8iconSizeEv(void *this_) {
  auto rv = ((QComboBox*)this_)->iconSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:142
// [-2] void setIconSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11setIconSizeERK5QSize(void *this_, QSize* size) {
  ((QComboBox*)this_)->setIconSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:144
// [1] bool isEditable()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QComboBox10isEditableEv(void *this_) {
  return (bool)((QComboBox*)this_)->isEditable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:145
// [-2] void setEditable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11setEditableEb(void *this_, bool editable) {
  ((QComboBox*)this_)->setEditable(editable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:146
// [-2] void setLineEdit(QLineEdit *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11setLineEditEP9QLineEdit(void *this_, QLineEdit * edit) {
  ((QComboBox*)this_)->setLineEdit(edit);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:147
// [8] QLineEdit * lineEdit()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox8lineEditEv(void *this_) {
  return (void*)((QComboBox*)this_)->lineEdit();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:149
// [-2] void setValidator(const QValidator *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox12setValidatorEPK10QValidator(void *this_, const QValidator * v) {
  ((QComboBox*)this_)->setValidator(v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:150
// [8] const QValidator * validator()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox9validatorEv(void *this_) {
  return (void*)((QComboBox*)this_)->validator();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qcombobox.h:154
// [-2] void setCompleter(QCompleter *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox12setCompleterEP10QCompleter(void *this_, QCompleter * c) {
  ((QComboBox*)this_)->setCompleter(c);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qcombobox.h:155
// [8] QCompleter * completer()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox9completerEv(void *this_) {
  return (void*)((QComboBox*)this_)->completer();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:158
// [8] QAbstractItemDelegate * itemDelegate()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox12itemDelegateEv(void *this_) {
  return (void*)((QComboBox*)this_)->itemDelegate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:159
// [-2] void setItemDelegate(QAbstractItemDelegate *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox15setItemDelegateEP21QAbstractItemDelegate(void *this_, QAbstractItemDelegate * delegate) {
  ((QComboBox*)this_)->setItemDelegate(delegate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:161
// [8] QAbstractItemModel * model()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox5modelEv(void *this_) {
  return (void*)((QComboBox*)this_)->model();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:162
// [-2] void setModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QComboBox*)this_)->setModel(model);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:164
// [24] QModelIndex rootModelIndex()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox14rootModelIndexEv(void *this_) {
  auto rv = ((QComboBox*)this_)->rootModelIndex();
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:165
// [-2] void setRootModelIndex(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox17setRootModelIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QComboBox*)this_)->setRootModelIndex(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:167
// [4] int modelColumn()
extern "C" Q_DECL_EXPORT
int C_ZNK9QComboBox11modelColumnEv(void *this_) {
  return (int)((QComboBox*)this_)->modelColumn();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:168
// [-2] void setModelColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox14setModelColumnEi(void *this_, int visibleColumn) {
  ((QComboBox*)this_)->setModelColumn(visibleColumn);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:170
// [4] int currentIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK9QComboBox12currentIndexEv(void *this_) {
  return (int)((QComboBox*)this_)->currentIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:171
// [8] QString currentText()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox11currentTextEv(void *this_) {
  auto rv = ((QComboBox*)this_)->currentText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:172
// [16] QVariant currentData(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox11currentDataEi(void *this_, int role) {
  auto rv = ((QComboBox*)this_)->currentData(role);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:174
// [8] QString itemText(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox8itemTextEi(void *this_, int index) {
  auto rv = ((QComboBox*)this_)->itemText(index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:175
// [8] QIcon itemIcon(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox8itemIconEi(void *this_, int index) {
  auto rv = ((QComboBox*)this_)->itemIcon(index);
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:176
// [16] QVariant itemData(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox8itemDataEii(void *this_, int index, int role) {
  auto rv = ((QComboBox*)this_)->itemData(index, role);
return new QVariant(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:178
// [-2] void addItem(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox7addItemERK7QStringRK8QVariant(void *this_, QString* text, QVariant* userData) {
  ((QComboBox*)this_)->addItem(*text, *userData);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:179
// [-2] void addItem(const QIcon &, const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox7addItemERK5QIconRK7QStringRK8QVariant(void *this_, QIcon* icon, QString* text, QVariant* userData) {
  ((QComboBox*)this_)->addItem(*icon, *text, *userData);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:181
// [-2] void addItems(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox8addItemsERK11QStringList(void *this_, QStringList* texts) {
  ((QComboBox*)this_)->addItems(*texts);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:184
// [-2] void insertItem(int, const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox10insertItemEiRK7QStringRK8QVariant(void *this_, int index, QString* text, QVariant* userData) {
  ((QComboBox*)this_)->insertItem(index, *text, *userData);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:185
// [-2] void insertItem(int, const QIcon &, const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox10insertItemEiRK5QIconRK7QStringRK8QVariant(void *this_, int index, QIcon* icon, QString* text, QVariant* userData) {
  ((QComboBox*)this_)->insertItem(index, *icon, *text, *userData);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:187
// [-2] void insertItems(int, const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11insertItemsEiRK11QStringList(void *this_, int index, QStringList* texts) {
  ((QComboBox*)this_)->insertItems(index, *texts);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qcombobox.h:188
// [-2] void insertSeparator(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox15insertSeparatorEi(void *this_, int index) {
  ((QComboBox*)this_)->insertSeparator(index);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:190
// [-2] void removeItem(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox10removeItemEi(void *this_, int index) {
  ((QComboBox*)this_)->removeItem(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:192
// [-2] void setItemText(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11setItemTextEiRK7QString(void *this_, int index, QString* text) {
  ((QComboBox*)this_)->setItemText(index, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:193
// [-2] void setItemIcon(int, const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11setItemIconEiRK5QIcon(void *this_, int index, QIcon* icon) {
  ((QComboBox*)this_)->setItemIcon(index, *icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:194
// [-2] void setItemData(int, const QVariant &, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11setItemDataEiRK8QVarianti(void *this_, int index, QVariant* value, int role) {
  ((QComboBox*)this_)->setItemData(index, *value, role);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:196
// [8] QAbstractItemView * view()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox4viewEv(void *this_) {
  return (void*)((QComboBox*)this_)->view();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:197
// [-2] void setView(QAbstractItemView *)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox7setViewEP17QAbstractItemView(void *this_, QAbstractItemView * itemView) {
  ((QComboBox*)this_)->setView(itemView);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:199
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox8sizeHintEv(void *this_) {
  auto rv = ((QComboBox*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:200
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox15minimumSizeHintEv(void *this_) {
  auto rv = ((QComboBox*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:202
// [-2] void showPopup()
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox9showPopupEv(void *this_) {
  ((QComboBox*)this_)->showPopup();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:203
// [-2] void hidePopup()
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox9hidePopupEv(void *this_) {
  ((QComboBox*)this_)->hidePopup();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:205
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QComboBox5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QComboBox*)this_)->event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:206
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery arg0) {
  auto rv = ((QComboBox*)this_)->inputMethodQuery(arg0);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:207
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QComboBox16inputMethodQueryEN2Qt16InputMethodQueryERK8QVariant(void *this_, Qt::InputMethodQuery query, QVariant* argument) {
  auto rv = ((QComboBox*)this_)->inputMethodQuery(query, *argument);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:210
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox5clearEv(void *this_) {
  ((QComboBox*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:211
// [-2] void clearEditText()
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox13clearEditTextEv(void *this_) {
  ((QComboBox*)this_)->clearEditText();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:212
// [-2] void setEditText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11setEditTextERK7QString(void *this_, QString* text) {
  ((QComboBox*)this_)->setEditText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:213
// [-2] void setCurrentIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox15setCurrentIndexEi(void *this_, int index) {
  ((QComboBox*)this_)->setCurrentIndex(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:214
// [-2] void setCurrentText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox14setCurrentTextERK7QString(void *this_, QString* text) {
  ((QComboBox*)this_)->setCurrentText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:217
// [-2] void editTextChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox15editTextChangedERK7QString(void *this_, QString* arg0) {
  ((QComboBox*)this_)->editTextChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:218
// [-2] void activated(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox9activatedEi(void *this_, int index) {
  ((QComboBox*)this_)->activated(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:219
// [-2] void activated(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox9activatedERK7QString(void *this_, QString* arg0) {
  ((QComboBox*)this_)->activated(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:220
// [-2] void highlighted(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11highlightedEi(void *this_, int index) {
  ((QComboBox*)this_)->highlighted(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:221
// [-2] void highlighted(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox11highlightedERK7QString(void *this_, QString* arg0) {
  ((QComboBox*)this_)->highlighted(*arg0);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qcombobox.h:222
// [-2] void currentIndexChanged(int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox19currentIndexChangedEi(void *this_, int index) {
  ((QComboBox*)this_)->currentIndexChanged(index);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qcombobox.h:223
// [-2] void currentIndexChanged(const QString &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox19currentIndexChangedERK7QString(void *this_, QString* arg0) {
  ((QComboBox*)this_)->currentIndexChanged(*arg0);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtWidgets/qcombobox.h:224
// [-2] void currentTextChanged(const QString &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN9QComboBox18currentTextChangedERK7QString(void *this_, QString* arg0) {
  ((QComboBox*)this_)->currentTextChanged(*arg0);
}
#endif // QT_VERSION >= 0x050000

//  main block end
