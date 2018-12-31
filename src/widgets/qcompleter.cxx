//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(completer)
// since 0x040200
// /usr/include/qt/QtWidgets/qcompleter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcompleter.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCompleter is pure virtual: false
// QCompleter has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCompleter_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCompleter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCompleter_t qt_meta_stringdata_MyQCompleter = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQCompleter"
  },
  "MyQCompleter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCompleter[] = {
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
class Q_DECL_EXPORT MyQCompleter : public QCompleter {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCompleter::staticMetaObject,
  qt_meta_stringdata_MyQCompleter.data,
  qt_meta_data_MyQCompleter,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCompleter.stringdata0))
      return static_cast<void*>(this);
  return QCompleter::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCompleter::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCompleter() {}
// void QCompleter(QObject *)
MyQCompleter(QObject * parent) : QCompleter(parent) {}
// void QCompleter(QAbstractItemModel *, QObject *)
MyQCompleter(QAbstractItemModel * model, QObject * parent) : QCompleter(model, parent) {}
// void QCompleter(const QStringList &, QObject *)
MyQCompleter(const QStringList & completions, QObject * parent) : QCompleter(completions, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * o, QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)o, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCompleter::eventFilter(o, e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCompleter::event(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCompleter_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCompleter* qo = (MyQCompleter*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:145
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QCompleter11eventFilterEP7QObjectP6QEvent(void *this_, QObject * o, QEvent * e) {
  return (bool)((QCompleter*)this_)->QCompleter::eventFilter(o, e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:146
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QCompleter5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QCompleter*)this_)->QCompleter::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCompleter10metaObjectEv(void *this_) {
  return (void*)((QCompleter*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCompleter11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCompleter*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QCompleter11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCompleter*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCompleter2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCompleter::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCompleter6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCompleter::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:85
// [-2] void QCompleter(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCompleterC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQCompleter*)(0);
  return  new MyQCompleter(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:86
// [-2] void QCompleter(QAbstractItemModel *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCompleterC2EP18QAbstractItemModelP7QObject(QAbstractItemModel * model, QObject * parent) {
  auto _nilp = (MyQCompleter*)(0);
  return  new MyQCompleter(model, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:88
// [-2] void QCompleter(const QStringList &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QCompleterC2ERK11QStringListP7QObject(QStringList* completions, QObject * parent) {
  auto _nilp = (MyQCompleter*)(0);
  return  new MyQCompleter(*completions, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:90
// [-2] void ~QCompleter()
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleterD2Ev(void *this_) {
  delete (QCompleter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:92
// [-2] void setWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QCompleter*)this_)->setWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:93
// [8] QWidget * widget()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCompleter6widgetEv(void *this_) {
  return (void*)((QCompleter*)this_)->widget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:95
// [-2] void setModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * c) {
  ((QCompleter*)this_)->setModel(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:96
// [8] QAbstractItemModel * model()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCompleter5modelEv(void *this_) {
  return (void*)((QCompleter*)this_)->model();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:98
// [-2] void setCompletionMode(QCompleter::CompletionMode)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter17setCompletionModeENS_14CompletionModeE(void *this_, QCompleter::CompletionMode mode) {
  ((QCompleter*)this_)->setCompletionMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:99
// [4] QCompleter::CompletionMode completionMode()
extern "C" Q_DECL_EXPORT
QCompleter::CompletionMode C_ZNK10QCompleter14completionModeEv(void *this_) {
  return (QCompleter::CompletionMode)((QCompleter*)this_)->completionMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:101
// [-2] void setFilterMode(Qt::MatchFlags)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter13setFilterModeE6QFlagsIN2Qt9MatchFlagEE(void *this_, QFlags<Qt::MatchFlag> filterMode) {
  ((QCompleter*)this_)->setFilterMode(filterMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:102
// [4] Qt::MatchFlags filterMode()
extern "C" Q_DECL_EXPORT
Qt::MatchFlags C_ZNK10QCompleter10filterModeEv(void *this_) {
  return (Qt::MatchFlags)((QCompleter*)this_)->filterMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:104
// [8] QAbstractItemView * popup()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCompleter5popupEv(void *this_) {
  return (void*)((QCompleter*)this_)->popup();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:105
// [-2] void setPopup(QAbstractItemView *)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter8setPopupEP17QAbstractItemView(void *this_, QAbstractItemView * popup) {
  ((QCompleter*)this_)->setPopup(popup);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:107
// [-2] void setCaseSensitivity(Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter18setCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity caseSensitivity) {
  ((QCompleter*)this_)->setCaseSensitivity(caseSensitivity);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:108
// [4] Qt::CaseSensitivity caseSensitivity()
extern "C" Q_DECL_EXPORT
Qt::CaseSensitivity C_ZNK10QCompleter15caseSensitivityEv(void *this_) {
  return (Qt::CaseSensitivity)((QCompleter*)this_)->caseSensitivity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:110
// [-2] void setModelSorting(QCompleter::ModelSorting)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter15setModelSortingENS_12ModelSortingE(void *this_, QCompleter::ModelSorting sorting) {
  ((QCompleter*)this_)->setModelSorting(sorting);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:111
// [4] QCompleter::ModelSorting modelSorting()
extern "C" Q_DECL_EXPORT
QCompleter::ModelSorting C_ZNK10QCompleter12modelSortingEv(void *this_) {
  return (QCompleter::ModelSorting)((QCompleter*)this_)->modelSorting();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:113
// [-2] void setCompletionColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter19setCompletionColumnEi(void *this_, int column) {
  ((QCompleter*)this_)->setCompletionColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:114
// [4] int completionColumn()
extern "C" Q_DECL_EXPORT
int C_ZNK10QCompleter16completionColumnEv(void *this_) {
  return (int)((QCompleter*)this_)->completionColumn();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:116
// [-2] void setCompletionRole(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter17setCompletionRoleEi(void *this_, int role) {
  ((QCompleter*)this_)->setCompletionRole(role);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:117
// [4] int completionRole()
extern "C" Q_DECL_EXPORT
int C_ZNK10QCompleter14completionRoleEv(void *this_) {
  return (int)((QCompleter*)this_)->completionRole();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:119
// [1] bool wrapAround()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QCompleter10wrapAroundEv(void *this_) {
  return (bool)((QCompleter*)this_)->wrapAround();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:121
// [4] int maxVisibleItems()
extern "C" Q_DECL_EXPORT
int C_ZNK10QCompleter15maxVisibleItemsEv(void *this_) {
  return (int)((QCompleter*)this_)->maxVisibleItems();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:122
// [-2] void setMaxVisibleItems(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter18setMaxVisibleItemsEi(void *this_, int maxItems) {
  ((QCompleter*)this_)->setMaxVisibleItems(maxItems);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:124
// [4] int completionCount()
extern "C" Q_DECL_EXPORT
int C_ZNK10QCompleter15completionCountEv(void *this_) {
  return (int)((QCompleter*)this_)->completionCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:125
// [1] bool setCurrentRow(int)
extern "C" Q_DECL_EXPORT
bool C_ZN10QCompleter13setCurrentRowEi(void *this_, int row) {
  return (bool)((QCompleter*)this_)->setCurrentRow(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:126
// [4] int currentRow()
extern "C" Q_DECL_EXPORT
int C_ZNK10QCompleter10currentRowEv(void *this_) {
  return (int)((QCompleter*)this_)->currentRow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:128
// [24] QModelIndex currentIndex()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCompleter12currentIndexEv(void *this_) {
  auto rv = ((QCompleter*)this_)->currentIndex();
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:129
// [8] QString currentCompletion()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCompleter17currentCompletionEv(void *this_) {
  auto rv = ((QCompleter*)this_)->currentCompletion();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:131
// [8] QAbstractItemModel * completionModel()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCompleter15completionModelEv(void *this_) {
  return (void*)((QCompleter*)this_)->completionModel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:133
// [8] QString completionPrefix()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCompleter16completionPrefixEv(void *this_) {
  auto rv = ((QCompleter*)this_)->completionPrefix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:136
// [-2] void setCompletionPrefix(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter19setCompletionPrefixERK7QString(void *this_, QString* prefix) {
  ((QCompleter*)this_)->setCompletionPrefix(*prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:137
// [-2] void complete(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter8completeERK5QRect(void *this_, QRect* rect) {
  ((QCompleter*)this_)->complete(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:138
// [-2] void setWrapAround(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter13setWrapAroundEb(void *this_, bool wrap) {
  ((QCompleter*)this_)->setWrapAround(wrap);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:141
// [8] QString pathFromIndex(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCompleter13pathFromIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QCompleter*)this_)->pathFromIndex(*index);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:142
// [8] QStringList splitPath(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QCompleter9splitPathERK7QString(void *this_, QString* path) {
  auto rv = ((QCompleter*)this_)->splitPath(*path);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:149
// [-2] void activated(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter9activatedERK7QString(void *this_, QString* text) {
  ((QCompleter*)this_)->activated(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:150
// [-2] void activated(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter9activatedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QCompleter*)this_)->activated(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:151
// [-2] void highlighted(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter11highlightedERK7QString(void *this_, QString* text) {
  ((QCompleter*)this_)->highlighted(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:152
// [-2] void highlighted(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN10QCompleter11highlightedERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QCompleter*)this_)->highlighted(*index);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(completer)
#endif // #ifndef QT_MINIMAL
//  footer block end
