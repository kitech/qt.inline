//  header block begin

// /usr/include/qt/QtWidgets/qaction.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaction.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAction is pure virtual: false
// QAction has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAction_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAction_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAction_t qt_meta_stringdata_MyQAction = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQAction"
  },
  "MyQAction"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAction[] = {
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
class Q_DECL_EXPORT MyQAction : public QAction {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAction::staticMetaObject,
  qt_meta_stringdata_MyQAction.data,
  qt_meta_data_MyQAction,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAction.stringdata0))
      return static_cast<void*>(this);
  return QAction::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAction::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAction() {}
// void QAction(QObject *)
MyQAction(QObject * parent) : QAction(parent) {}
// void QAction(const QString &, QObject *)
MyQAction(const QString & text, QObject * parent) : QAction(text, parent) {}
// void QAction(const QIcon &, const QString &, QObject *)
MyQAction(const QIcon & icon, const QString & text, QObject * parent) : QAction(icon, text, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAction::event(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAction_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAction* qo = (MyQAction*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:180
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QAction5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QAction*)this_)->QAction::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction10metaObjectEv(void *this_) {
  return (void*)((QAction*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QAction11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAction*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN7QAction11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAction*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QAction2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAction::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QAction6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAction::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:94
// [-2] void QAction(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QActionC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQAction*)(0);
  return  new MyQAction(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:95
// [-2] void QAction(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QActionC2ERK7QStringP7QObject(QString* text, QObject * parent) {
  auto _nilp = (MyQAction*)(0);
  return  new MyQAction(*text, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:96
// [-2] void QAction(const QIcon &, const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QActionC2ERK5QIconRK7QStringP7QObject(QIcon* icon, QString* text, QObject * parent) {
  auto _nilp = (MyQAction*)(0);
  return  new MyQAction(*icon, *text, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:98
// [-2] void ~QAction()
extern "C" Q_DECL_EXPORT
void C_ZN7QActionD2Ev(void *this_) {
  delete (QAction*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:100
// [-2] void setActionGroup(QActionGroup *)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction14setActionGroupEP12QActionGroup(void *this_, QActionGroup * group) {
  ((QAction*)this_)->setActionGroup(group);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:101
// [8] QActionGroup * actionGroup()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction11actionGroupEv(void *this_) {
  return (void*)((QAction*)this_)->actionGroup();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:102
// [-2] void setIcon(const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7setIconERK5QIcon(void *this_, QIcon* icon) {
  ((QAction*)this_)->setIcon(*icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:103
// [8] QIcon icon()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction4iconEv(void *this_) {
  auto rv = ((QAction*)this_)->icon();
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:105
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7setTextERK7QString(void *this_, QString* text) {
  ((QAction*)this_)->setText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:106
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction4textEv(void *this_) {
  auto rv = ((QAction*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:108
// [-2] void setIconText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction11setIconTextERK7QString(void *this_, QString* text) {
  ((QAction*)this_)->setIconText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:109
// [8] QString iconText()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction8iconTextEv(void *this_) {
  auto rv = ((QAction*)this_)->iconText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:111
// [-2] void setToolTip(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction10setToolTipERK7QString(void *this_, QString* tip) {
  ((QAction*)this_)->setToolTip(*tip);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:112
// [8] QString toolTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction7toolTipEv(void *this_) {
  auto rv = ((QAction*)this_)->toolTip();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:114
// [-2] void setStatusTip(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction12setStatusTipERK7QString(void *this_, QString* statusTip) {
  ((QAction*)this_)->setStatusTip(*statusTip);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:115
// [8] QString statusTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction9statusTipEv(void *this_) {
  auto rv = ((QAction*)this_)->statusTip();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:117
// [-2] void setWhatsThis(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction12setWhatsThisERK7QString(void *this_, QString* what) {
  ((QAction*)this_)->setWhatsThis(*what);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:118
// [8] QString whatsThis()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction9whatsThisEv(void *this_) {
  auto rv = ((QAction*)this_)->whatsThis();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:120
// [-2] void setPriority(QAction::Priority)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction11setPriorityENS_8PriorityE(void *this_, QAction::Priority priority) {
  ((QAction*)this_)->setPriority(priority);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:121
// [4] QAction::Priority priority()
extern "C" Q_DECL_EXPORT
QAction::Priority C_ZNK7QAction8priorityEv(void *this_) {
  return (QAction::Priority)((QAction*)this_)->priority();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:124
// [8] QMenu * menu()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction4menuEv(void *this_) {
  return (void*)((QAction*)this_)->menu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:125
// [-2] void setMenu(QMenu *)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7setMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QAction*)this_)->setMenu(menu);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:128
// [-2] void setSeparator(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction12setSeparatorEb(void *this_, bool b) {
  ((QAction*)this_)->setSeparator(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:129
// [1] bool isSeparator()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction11isSeparatorEv(void *this_) {
  return (bool)((QAction*)this_)->isSeparator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:132
// [-2] void setShortcut(const QKeySequence &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction11setShortcutERK12QKeySequence(void *this_, QKeySequence* shortcut) {
  ((QAction*)this_)->setShortcut(*shortcut);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:133
// [8] QKeySequence shortcut()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction8shortcutEv(void *this_) {
  auto rv = ((QAction*)this_)->shortcut();
return new QKeySequence(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qaction.h:135
// [-2] void setShortcuts(const QList<QKeySequence> &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN7QAction12setShortcutsERK5QListI12QKeySequenceE(void *this_, QList<QKeySequence>* shortcuts) {
  ((QAction*)this_)->setShortcuts(*shortcuts);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qaction.h:136
// [-2] void setShortcuts(QKeySequence::StandardKey)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN7QAction12setShortcutsEN12QKeySequence11StandardKeyE(void *this_, QKeySequence::StandardKey arg0) {
  ((QAction*)this_)->setShortcuts(arg0);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qaction.h:137
// [-2] QList<QKeySequence> shortcuts()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QList<QKeySequence>* C_ZNK7QAction9shortcutsEv(void *this_) {
  auto rv = ((QAction*)this_)->shortcuts();
return new QList<QKeySequence>(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:139
// [-2] void setShortcutContext(Qt::ShortcutContext)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction18setShortcutContextEN2Qt15ShortcutContextE(void *this_, Qt::ShortcutContext context) {
  ((QAction*)this_)->setShortcutContext(context);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:140
// [4] Qt::ShortcutContext shortcutContext()
extern "C" Q_DECL_EXPORT
Qt::ShortcutContext C_ZNK7QAction15shortcutContextEv(void *this_) {
  return (Qt::ShortcutContext)((QAction*)this_)->shortcutContext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:142
// [-2] void setAutoRepeat(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction13setAutoRepeatEb(void *this_, bool arg0) {
  ((QAction*)this_)->setAutoRepeat(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:143
// [1] bool autoRepeat()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction10autoRepeatEv(void *this_) {
  return (bool)((QAction*)this_)->autoRepeat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:146
// [-2] void setFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7setFontERK5QFont(void *this_, QFont* font) {
  ((QAction*)this_)->setFont(*font);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:147
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction4fontEv(void *this_) {
  auto rv = ((QAction*)this_)->font();
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:149
// [-2] void setCheckable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction12setCheckableEb(void *this_, bool arg0) {
  ((QAction*)this_)->setCheckable(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:150
// [1] bool isCheckable()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction11isCheckableEv(void *this_) {
  return (bool)((QAction*)this_)->isCheckable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:152
// [16] QVariant data()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction4dataEv(void *this_) {
  auto rv = ((QAction*)this_)->data();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:153
// [-2] void setData(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7setDataERK8QVariant(void *this_, QVariant* var_) {
  ((QAction*)this_)->setData(*var_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:155
// [1] bool isChecked()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction9isCheckedEv(void *this_) {
  return (bool)((QAction*)this_)->isChecked();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:157
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction9isEnabledEv(void *this_) {
  return (bool)((QAction*)this_)->isEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:159
// [1] bool isVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction9isVisibleEv(void *this_) {
  return (bool)((QAction*)this_)->isVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:162
// [-2] void activate(QAction::ActionEvent)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction8activateENS_11ActionEventE(void *this_, QAction::ActionEvent event) {
  ((QAction*)this_)->activate(event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:163
// [1] bool showStatusText(QWidget *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QAction14showStatusTextEP7QWidget(void *this_, QWidget * widget) {
  return (bool)((QAction*)this_)->showStatusText(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:165
// [-2] void setMenuRole(QAction::MenuRole)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction11setMenuRoleENS_8MenuRoleE(void *this_, QAction::MenuRole menuRole) {
  ((QAction*)this_)->setMenuRole(menuRole);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:166
// [4] QAction::MenuRole menuRole()
extern "C" Q_DECL_EXPORT
QAction::MenuRole C_ZNK7QAction8menuRoleEv(void *this_) {
  return (QAction::MenuRole)((QAction*)this_)->menuRole();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:168
// [-2] void setIconVisibleInMenu(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction20setIconVisibleInMenuEb(void *this_, bool visible) {
  ((QAction*)this_)->setIconVisibleInMenu(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:169
// [1] bool isIconVisibleInMenu()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction19isIconVisibleInMenuEv(void *this_) {
  return (bool)((QAction*)this_)->isIconVisibleInMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:172
// [8] QWidget * parentWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction12parentWidgetEv(void *this_) {
  return (void*)((QAction*)this_)->parentWidget();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qaction.h:174
// [-2] QList<QWidget *> associatedWidgets()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QList<QWidget *>* C_ZNK7QAction17associatedWidgetsEv(void *this_) {
  auto rv = ((QAction*)this_)->associatedWidgets();
return new QList<QWidget *>(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qaction.h:176
// [-2] QList<QGraphicsWidget *> associatedGraphicsWidgets()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QList<QGraphicsWidget *>* C_ZNK7QAction25associatedGraphicsWidgetsEv(void *this_) {
  auto rv = ((QAction*)this_)->associatedGraphicsWidgets();
return new QList<QGraphicsWidget *>(rv);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:184
// [-2] void trigger()
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7triggerEv(void *this_) {
  ((QAction*)this_)->trigger();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:185
// [-2] void hover()
extern "C" Q_DECL_EXPORT
void C_ZN7QAction5hoverEv(void *this_) {
  ((QAction*)this_)->hover();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:186
// [-2] void setChecked(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction10setCheckedEb(void *this_, bool arg0) {
  ((QAction*)this_)->setChecked(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:187
// [-2] void toggle()
extern "C" Q_DECL_EXPORT
void C_ZN7QAction6toggleEv(void *this_) {
  ((QAction*)this_)->toggle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:188
// [-2] void setEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction10setEnabledEb(void *this_, bool arg0) {
  ((QAction*)this_)->setEnabled(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:189
// [-2] void setDisabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction11setDisabledEb(void *this_, bool b) {
  ((QAction*)this_)->setDisabled(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:190
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction10setVisibleEb(void *this_, bool arg0) {
  ((QAction*)this_)->setVisible(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:193
// [-2] void changed()
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7changedEv(void *this_) {
  ((QAction*)this_)->changed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:194
// [-2] void triggered(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction9triggeredEb(void *this_, bool checked) {
  ((QAction*)this_)->triggered(checked);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:195
// [-2] void hovered()
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7hoveredEv(void *this_) {
  ((QAction*)this_)->hovered();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:196
// [-2] void toggled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7toggledEb(void *this_, bool arg0) {
  ((QAction*)this_)->toggled(arg0);
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
