//  header block begin

// /usr/include/qt/QtWidgets/qmessagebox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmessagebox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMessageBox is pure virtual: false
// QMessageBox has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMessageBox_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMessageBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMessageBox_t qt_meta_stringdata_MyQMessageBox = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQMessageBox"
  },
  "MyQMessageBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMessageBox[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQMessageBox : public QMessageBox {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMessageBox::staticMetaObject,
  qt_meta_stringdata_MyQMessageBox.data,
  qt_meta_data_MyQMessageBox,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQMessageBox.stringdata0))
      return static_cast<void*>(this);
  return QMessageBox::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMessageBox::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQMessageBox() {}
// void QMessageBox(QWidget *)
MyQMessageBox(QWidget * parent) : QMessageBox(parent) {}
// void QMessageBox(QMessageBox::Icon, const QString &, const QString &, QMessageBox::StandardButtons, QWidget *, Qt::WindowFlags)
MyQMessageBox(QMessageBox::Icon icon, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QWidget * parent, QFlags<Qt::WindowType> flags) : QMessageBox(icon, title, text, buttons, parent, flags) {}
// void QMessageBox(const QString &, const QString &, QMessageBox::Icon, int, int, int, QWidget *, Qt::WindowFlags)
MyQMessageBox(const QString & title, const QString & text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget * parent, QFlags<Qt::WindowType> f) : QMessageBox(title, text, icon, button0, button1, button2, parent, f) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMessageBox::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMessageBox::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMessageBox::showEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void closeEvent(QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMessageBox::closeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMessageBox::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMessageBox::changeEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMessageBox_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMessageBox* qo = (MyQMessageBox*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:294
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QMessageBox5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QMessageBox*)this_)->QMessageBox::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:295
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QMessageBox*)this_)->QMessageBox::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:296
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox9showEventEP10QShowEvent(void *this_, QShowEvent * event) {
  ((QMessageBox*)this_)->QMessageBox::showEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:297
// [-2] void closeEvent(QCloseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox10closeEventEP11QCloseEvent(void *this_, QCloseEvent * event) {
  ((QMessageBox*)this_)->QMessageBox::closeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:298
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QMessageBox*)this_)->QMessageBox::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:299
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QMessageBox*)this_)->QMessageBox::changeEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox10metaObjectEv(void *this_) {
  return (void*)((QMessageBox*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBox11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMessageBox*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMessageBox*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBox2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMessageBox::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBox6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMessageBox::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:136
// [-2] void QMessageBox(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQMessageBox*)(0);
  return  new MyQMessageBox(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:137
// [-2] void QMessageBox(QMessageBox::Icon, const QString &, const QString &, QMessageBox::StandardButtons, QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBoxC2ENS_4IconERK7QStringS3_6QFlagsINS_14StandardButtonEEP7QWidgetS4_IN2Qt10WindowTypeEE(QMessageBox::Icon icon, QString* title, QString* text, QFlags<QMessageBox::StandardButton> buttons, QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQMessageBox*)(0);
  return  new MyQMessageBox(icon, *title, *text, buttons, parent, flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:140
// [-2] void ~QMessageBox()
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBoxD2Ev(void *this_) {
  delete (QMessageBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:142
// [-2] void addButton(QAbstractButton *, QMessageBox::ButtonRole)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox9addButtonEP15QAbstractButtonNS_10ButtonRoleE(void *this_, QAbstractButton * button, QMessageBox::ButtonRole role) {
  ((QMessageBox*)this_)->addButton(button, role);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:143
// [8] QPushButton * addButton(const QString &, QMessageBox::ButtonRole)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBox9addButtonERK7QStringNS_10ButtonRoleE(void *this_, QString* text, QMessageBox::ButtonRole role) {
  return (void*)((QMessageBox*)this_)->addButton(*text, role);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:144
// [8] QPushButton * addButton(QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBox9addButtonENS_14StandardButtonE(void *this_, QMessageBox::StandardButton button) {
  return (void*)((QMessageBox*)this_)->addButton(button);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qmessagebox.h:145
// [-2] void removeButton(QAbstractButton *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox12removeButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QMessageBox*)this_)->removeButton(button);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:148
// [-2] void open(QObject *, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QMessageBox*)this_)->open(receiver, member);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qmessagebox.h:150
// [-2] QList<QAbstractButton *> buttons()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QList<QAbstractButton *>* C_ZNK11QMessageBox7buttonsEv(void *this_) {
  auto rv = ((QMessageBox*)this_)->buttons();
return new QList<QAbstractButton *>(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qmessagebox.h:151
// [4] QMessageBox::ButtonRole buttonRole(QAbstractButton *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QMessageBox::ButtonRole C_ZNK11QMessageBox10buttonRoleEP15QAbstractButton(void *this_, QAbstractButton * button) {
  return (QMessageBox::ButtonRole)((QMessageBox*)this_)->buttonRole(button);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:153
// [-2] void setStandardButtons(QMessageBox::StandardButtons)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox18setStandardButtonsE6QFlagsINS_14StandardButtonEE(void *this_, QFlags<QMessageBox::StandardButton> buttons) {
  ((QMessageBox*)this_)->setStandardButtons(buttons);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:154
// [4] QMessageBox::StandardButtons standardButtons()
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButtons* C_ZNK11QMessageBox15standardButtonsEv(void *this_) {
  auto rv = ((QMessageBox*)this_)->standardButtons();
return new QMessageBox::StandardButtons(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qmessagebox.h:155
// [4] QMessageBox::StandardButton standardButton(QAbstractButton *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButton C_ZNK11QMessageBox14standardButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  return (QMessageBox::StandardButton)((QMessageBox*)this_)->standardButton(button);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:156
// [8] QAbstractButton * button(QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox6buttonENS_14StandardButtonE(void *this_, QMessageBox::StandardButton which) {
  return (void*)((QMessageBox*)this_)->button(which);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qmessagebox.h:158
// [8] QPushButton * defaultButton()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox13defaultButtonEv(void *this_) {
  return (void*)((QMessageBox*)this_)->defaultButton();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qmessagebox.h:159
// [-2] void setDefaultButton(QPushButton *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox16setDefaultButtonEP11QPushButton(void *this_, QPushButton * button) {
  ((QMessageBox*)this_)->setDefaultButton(button);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:160
// [-2] void setDefaultButton(QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox16setDefaultButtonENS_14StandardButtonE(void *this_, QMessageBox::StandardButton button) {
  ((QMessageBox*)this_)->setDefaultButton(button);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qmessagebox.h:162
// [8] QAbstractButton * escapeButton()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox12escapeButtonEv(void *this_) {
  return (void*)((QMessageBox*)this_)->escapeButton();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qmessagebox.h:163
// [-2] void setEscapeButton(QAbstractButton *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox15setEscapeButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QMessageBox*)this_)->setEscapeButton(button);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:164
// [-2] void setEscapeButton(QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox15setEscapeButtonENS_14StandardButtonE(void *this_, QMessageBox::StandardButton button) {
  ((QMessageBox*)this_)->setEscapeButton(button);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qmessagebox.h:166
// [8] QAbstractButton * clickedButton()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox13clickedButtonEv(void *this_) {
  return (void*)((QMessageBox*)this_)->clickedButton();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:168
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox4textEv(void *this_) {
  auto rv = ((QMessageBox*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:169
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox7setTextERK7QString(void *this_, QString* text) {
  ((QMessageBox*)this_)->setText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:171
// [4] QMessageBox::Icon icon()
extern "C" Q_DECL_EXPORT
QMessageBox::Icon C_ZNK11QMessageBox4iconEv(void *this_) {
  return (QMessageBox::Icon)((QMessageBox*)this_)->icon();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:172
// [-2] void setIcon(QMessageBox::Icon)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox7setIconENS_4IconE(void *this_, QMessageBox::Icon arg0) {
  ((QMessageBox*)this_)->setIcon(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:174
// [32] QPixmap iconPixmap()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox10iconPixmapEv(void *this_) {
  auto rv = ((QMessageBox*)this_)->iconPixmap();
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:175
// [-2] void setIconPixmap(const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox13setIconPixmapERK7QPixmap(void *this_, QPixmap* pixmap) {
  ((QMessageBox*)this_)->setIconPixmap(*pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:177
// [4] Qt::TextFormat textFormat()
extern "C" Q_DECL_EXPORT
Qt::TextFormat C_ZNK11QMessageBox10textFormatEv(void *this_) {
  return (Qt::TextFormat)((QMessageBox*)this_)->textFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:178
// [-2] void setTextFormat(Qt::TextFormat)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox13setTextFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat format) {
  ((QMessageBox*)this_)->setTextFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:180
// [-2] void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QMessageBox*)this_)->setTextInteractionFlags(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:181
// [4] Qt::TextInteractionFlags textInteractionFlags()
extern "C" Q_DECL_EXPORT
Qt::TextInteractionFlags C_ZNK11QMessageBox20textInteractionFlagsEv(void *this_) {
  return (Qt::TextInteractionFlags)((QMessageBox*)this_)->textInteractionFlags();
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qmessagebox.h:183
// [-2] void setCheckBox(QCheckBox *)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox11setCheckBoxEP9QCheckBox(void *this_, QCheckBox * cb) {
  ((QMessageBox*)this_)->setCheckBox(cb);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qmessagebox.h:184
// [8] QCheckBox * checkBox()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox8checkBoxEv(void *this_) {
  return (void*)((QMessageBox*)this_)->checkBox();
}
#endif // QT_VERSION >= 0x050200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:186
// [4] QMessageBox::StandardButton information(QWidget *, const QString &, const QString &, QMessageBox::StandardButtons, QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButton C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * parent, QString* title, QString* text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton) {
  return (QMessageBox::StandardButton)QMessageBox::information(parent, *title, *text, buttons, defaultButton);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:189
// [4] QMessageBox::StandardButton question(QWidget *, const QString &, const QString &, QMessageBox::StandardButtons, QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButton C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * parent, QString* title, QString* text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton) {
  return (QMessageBox::StandardButton)QMessageBox::question(parent, *title, *text, buttons, defaultButton);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:192
// [4] QMessageBox::StandardButton warning(QWidget *, const QString &, const QString &, QMessageBox::StandardButtons, QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButton C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * parent, QString* title, QString* text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton) {
  return (QMessageBox::StandardButton)QMessageBox::warning(parent, *title, *text, buttons, defaultButton);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:195
// [4] QMessageBox::StandardButton critical(QWidget *, const QString &, const QString &, QMessageBox::StandardButtons, QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButton C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * parent, QString* title, QString* text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton) {
  return (QMessageBox::StandardButton)QMessageBox::critical(parent, *title, *text, buttons, defaultButton);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:198
// [-2] void about(QWidget *, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox5aboutEP7QWidgetRK7QStringS4_(QWidget * parent, QString* title, QString* text) {
  QMessageBox::about(parent, *title, *text);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:199
// [-2] void aboutQt(QWidget *, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox7aboutQtEP7QWidgetRK7QString(QWidget * parent, QString* title) {
  QMessageBox::aboutQt(parent, *title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:203
// [-2] void QMessageBox(const QString &, const QString &, QMessageBox::Icon, int, int, int, QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBoxC2ERK7QStringS2_NS_4IconEiiiP7QWidget6QFlagsIN2Qt10WindowTypeEE(QString* title, QString* text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQMessageBox*)(0);
  return  new MyQMessageBox(*title, *text, icon, button0, button1, button2, parent, f);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:208
// [4] int information(QWidget *, const QString &, const QString &, int, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_iii(QWidget * parent, QString* title, QString* text, int button0, int button1, int button2) {
  return (int)QMessageBox::information(parent, *title, *text, button0, button1, button2);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:211
// [4] int information(QWidget *, const QString &, const QString &, const QString &, const QString &, const QString &, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * parent, QString* title, QString* text, QString* button0Text, QString* button1Text, QString* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  return (int)QMessageBox::information(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber, escapeButtonNumber);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:218
// [4] QMessageBox::StandardButton information(QWidget *, const QString &, const QString &, QMessageBox::StandardButton, QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
QMessageBox::StandardButton C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * parent, QString* title, QString* text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  return (QMessageBox::StandardButton)QMessageBox::information(parent, *title, *text, button0, button1);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:223
// [4] int question(QWidget *, const QString &, const QString &, int, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_iii(QWidget * parent, QString* title, QString* text, int button0, int button1, int button2) {
  return (int)QMessageBox::question(parent, *title, *text, button0, button1, button2);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:226
// [4] int question(QWidget *, const QString &, const QString &, const QString &, const QString &, const QString &, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * parent, QString* title, QString* text, QString* button0Text, QString* button1Text, QString* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  return (int)QMessageBox::question(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber, escapeButtonNumber);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:233
// [4] int question(QWidget *, const QString &, const QString &, QMessageBox::StandardButton, QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * parent, QString* title, QString* text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  return (int)QMessageBox::question(parent, *title, *text, button0, button1);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:238
// [4] int warning(QWidget *, const QString &, const QString &, int, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_iii(QWidget * parent, QString* title, QString* text, int button0, int button1, int button2) {
  return (int)QMessageBox::warning(parent, *title, *text, button0, button1, button2);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:241
// [4] int warning(QWidget *, const QString &, const QString &, const QString &, const QString &, const QString &, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * parent, QString* title, QString* text, QString* button0Text, QString* button1Text, QString* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  return (int)QMessageBox::warning(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber, escapeButtonNumber);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:248
// [4] int warning(QWidget *, const QString &, const QString &, QMessageBox::StandardButton, QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * parent, QString* title, QString* text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  return (int)QMessageBox::warning(parent, *title, *text, button0, button1);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:253
// [4] int critical(QWidget *, const QString &, const QString &, int, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_iii(QWidget * parent, QString* title, QString* text, int button0, int button1, int button2) {
  return (int)QMessageBox::critical(parent, *title, *text, button0, button1, button2);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:256
// [4] int critical(QWidget *, const QString &, const QString &, const QString &, const QString &, const QString &, int, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * parent, QString* title, QString* text, QString* button0Text, QString* button1Text, QString* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
  return (int)QMessageBox::critical(parent, *title, *text, *button0Text, *button1Text, *button2Text, defaultButtonNumber, escapeButtonNumber);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:263
// [4] int critical(QWidget *, const QString &, const QString &, QMessageBox::StandardButton, QMessageBox::StandardButton)
extern "C" Q_DECL_EXPORT
int C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * parent, QString* title, QString* text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1) {
  return (int)QMessageBox::critical(parent, *title, *text, button0, button1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:268
// [8] QString buttonText(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox10buttonTextEi(void *this_, int button) {
  auto rv = ((QMessageBox*)this_)->buttonText(button);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:269
// [-2] void setButtonText(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox13setButtonTextEiRK7QString(void *this_, int button, QString* text) {
  ((QMessageBox*)this_)->setButtonText(button, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:271
// [8] QString informativeText()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox15informativeTextEv(void *this_) {
  auto rv = ((QMessageBox*)this_)->informativeText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:272
// [-2] void setInformativeText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox18setInformativeTextERK7QString(void *this_, QString* text) {
  ((QMessageBox*)this_)->setInformativeText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:275
// [8] QString detailedText()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMessageBox12detailedTextEv(void *this_) {
  auto rv = ((QMessageBox*)this_)->detailedText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:276
// [-2] void setDetailedText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox15setDetailedTextERK7QString(void *this_, QString* text) {
  ((QMessageBox*)this_)->setDetailedText(*text);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qmessagebox.h:279
// [-2] void setWindowTitle(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox14setWindowTitleERK7QString(void *this_, QString* title) {
  ((QMessageBox*)this_)->setWindowTitle(*title);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qmessagebox.h:280
// [-2] void setWindowModality(Qt::WindowModality)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox17setWindowModalityEN2Qt14WindowModalityE(void *this_, Qt::WindowModality windowModality) {
  ((QMessageBox*)this_)->setWindowModality(windowModality);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:283
// [32] QPixmap standardIcon(QMessageBox::Icon)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMessageBox12standardIconENS_4IconE(QMessageBox::Icon icon) {
  auto rv = QMessageBox::standardIcon(icon);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:286
// [-2] void buttonClicked(QAbstractButton *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMessageBox13buttonClickedEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QMessageBox*)this_)->buttonClicked(button);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
