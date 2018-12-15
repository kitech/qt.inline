//  header block begin

// /usr/include/qt/QtWidgets/qtableview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtableview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTableView is pure virtual: false
// QTableView has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTableView_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTableView_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTableView_t qt_meta_stringdata_MyQTableView = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQTableView"
  },
  "MyQTableView"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTableView[] = {
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
class Q_DECL_EXPORT MyQTableView : public QTableView {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTableView::staticMetaObject,
  qt_meta_stringdata_MyQTableView.data,
  qt_meta_data_MyQTableView,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTableView.stringdata0))
      return static_cast<void*>(this);
  return QTableView::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTableView::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTableView() {}
// void QTableView(QWidget *)
MyQTableView(QWidget * parent) : QTableView(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [192] QStyleOptionViewItem viewOptions()
  virtual QStyleOptionViewItem viewOptions() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewOptions", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStyleOptionViewItem){};}
    auto prv = (QStyleOptionViewItem*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStyleOptionViewItem
    } else {
    return QTableView::viewOptions();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::paintEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::timerEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int horizontalOffset()
  virtual int horizontalOffset() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTableView::horizontalOffset();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int verticalOffset()
  virtual int verticalOffset() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTableView::verticalOffset();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveCursor", &handled, 2, (uint64_t)cursorAction, (uint64_t)modifiers, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QModelIndex){};}
    auto prv = (QModelIndex*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QModelIndex
    } else {
    return QTableView::moveCursor(cursorAction, modifiers);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)command, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::setSelection(rect, command);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QRegion visualRegionForSelection(const QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visualRegionForSelection", &handled, 1, (uint64_t)&selection, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRegion){};}
    auto prv = (QRegion*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRegion
    } else {
    return QTableView::visualRegionForSelection(selection);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QModelIndexList selectedIndexes()
  virtual QModelIndexList selectedIndexes() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectedIndexes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndexList*)(irv);
      // Typedef Record QList<QModelIndex>
    } else {
    return QTableView::selectedIndexes();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateGeometries()
  virtual void updateGeometries()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::updateGeometries();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QSize viewportSizeHint()
  virtual QSize viewportSizeHint() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return QTableView::viewportSizeHint();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int sizeHintForRow(int)
  virtual int sizeHintForRow(int row) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHintForRow", &handled, 1, (uint64_t)row, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTableView::sizeHintForRow(row);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int sizeHintForColumn(int)
  virtual int sizeHintForColumn(int column) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHintForColumn", &handled, 1, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTableView::sizeHintForColumn(column);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void verticalScrollbarAction(int)
  virtual void verticalScrollbarAction(int action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::verticalScrollbarAction(action);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void horizontalScrollbarAction(int)
  virtual void horizontalScrollbarAction(int action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::horizontalScrollbarAction(action);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool isIndexHidden(const QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isIndexHidden", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTableView::isIndexHidden(index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void selectionChanged(const QItemSelection &, const QItemSelection &)
  virtual void selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectionChanged", &handled, 2, (uint64_t)&selected, (uint64_t)&deselected, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::selectionChanged(selected, deselected);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & previous)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&previous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::currentChanged(current, previous);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTableView_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTableView* qo = (MyQTableView*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:148
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QTableView*)this_)->QTableView::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:150
// [192] QStyleOptionViewItem viewOptions()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView11viewOptionsEv(void *this_) {
  auto rv = ((QTableView*)this_)->QTableView::viewOptions();
return new QStyleOptionViewItem(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:151
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView10paintEventEP11QPaintEvent(void *this_, QPaintEvent * e) {
  ((QTableView*)this_)->QTableView::paintEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:153
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView10timerEventEP11QTimerEvent(void *this_, QTimerEvent * event) {
  ((QTableView*)this_)->QTableView::timerEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:155
// [4] int horizontalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView16horizontalOffsetEv(void *this_) {
  return (int)((QTableView*)this_)->QTableView::horizontalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:156
// [4] int verticalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView14verticalOffsetEv(void *this_) {
  return (int)((QTableView*)this_)->QTableView::verticalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:157
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTableView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers) {
  auto rv = ((QTableView*)this_)->QTableView::moveCursor(cursorAction, modifiers);
return new QModelIndex(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:159
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QRect* rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QTableView*)this_)->QTableView::setSelection(*rect, command);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:160
// [8] QRegion visualRegionForSelection(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView24visualRegionForSelectionERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QTableView*)this_)->QTableView::visualRegionForSelection(*selection);
return new QRegion(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:161
// [8] QModelIndexList selectedIndexes()
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK10QTableView15selectedIndexesEv(void *this_) {
  auto rv = ((QTableView*)this_)->QTableView::selectedIndexes();
return new QModelIndexList(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:163
// [-2] void updateGeometries()
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView16updateGeometriesEv(void *this_) {
  ((QTableView*)this_)->QTableView::updateGeometries();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:165
// [8] QSize viewportSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView16viewportSizeHintEv(void *this_) {
  auto rv = ((QTableView*)this_)->QTableView::viewportSizeHint();
return new QSize(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:167
// [4] int sizeHintForRow(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView14sizeHintForRowEi(void *this_, int row) {
  return (int)((QTableView*)this_)->QTableView::sizeHintForRow(row);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:168
// [4] int sizeHintForColumn(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView17sizeHintForColumnEi(void *this_, int column) {
  return (int)((QTableView*)this_)->QTableView::sizeHintForColumn(column);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:170
// [-2] void verticalScrollbarAction(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView23verticalScrollbarActionEi(void *this_, int action) {
  ((QTableView*)this_)->QTableView::verticalScrollbarAction(action);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:171
// [-2] void horizontalScrollbarAction(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView25horizontalScrollbarActionEi(void *this_, int action) {
  ((QTableView*)this_)->QTableView::horizontalScrollbarAction(action);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:173
// [1] bool isIndexHidden(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView13isIndexHiddenERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QTableView*)this_)->QTableView::isIndexHidden(*index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:175
// [-2] void selectionChanged(const QItemSelection &, const QItemSelection &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView16selectionChangedERK14QItemSelectionS2_(void *this_, QItemSelection* selected, QItemSelection* deselected) {
  ((QTableView*)this_)->QTableView::selectionChanged(*selected, *deselected);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:177
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView14currentChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QTableView*)this_)->QTableView::currentChanged(*current, *previous);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView10metaObjectEv(void *this_) {
  return (void*)((QTableView*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTableView11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTableView*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QTableView11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTableView*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTableView2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTableView::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTableView6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTableView::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:66
// [-2] void QTableView(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTableViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTableView*)(0);
  return  new MyQTableView(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:67
// [-2] void ~QTableView()
extern "C" Q_DECL_EXPORT
void C_ZN10QTableViewD2Ev(void *this_) {
  delete (QTableView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:69
// [-2] void setModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QTableView*)this_)->setModel(model);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:70
// [-2] void setRootIndex(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTableView*)this_)->setRootIndex(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:71
// [-2] void setSelectionModel(QItemSelectionModel *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QTableView*)this_)->setSelectionModel(selectionModel);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:72
// [-2] void doItemsLayout()
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView13doItemsLayoutEv(void *this_) {
  ((QTableView*)this_)->doItemsLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:74
// [8] QHeaderView * horizontalHeader()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView16horizontalHeaderEv(void *this_) {
  return (void*)((QTableView*)this_)->horizontalHeader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:75
// [8] QHeaderView * verticalHeader()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView14verticalHeaderEv(void *this_) {
  return (void*)((QTableView*)this_)->verticalHeader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:76
// [-2] void setHorizontalHeader(QHeaderView *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView19setHorizontalHeaderEP11QHeaderView(void *this_, QHeaderView * header) {
  ((QTableView*)this_)->setHorizontalHeader(header);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:77
// [-2] void setVerticalHeader(QHeaderView *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView17setVerticalHeaderEP11QHeaderView(void *this_, QHeaderView * header) {
  ((QTableView*)this_)->setVerticalHeader(header);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:79
// [4] int rowViewportPosition(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView19rowViewportPositionEi(void *this_, int row) {
  return (int)((QTableView*)this_)->rowViewportPosition(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:80
// [4] int rowAt(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView5rowAtEi(void *this_, int y) {
  return (int)((QTableView*)this_)->rowAt(y);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtableview.h:82
// [-2] void setRowHeight(int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12setRowHeightEii(void *this_, int row, int height) {
  ((QTableView*)this_)->setRowHeight(row, height);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:83
// [4] int rowHeight(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView9rowHeightEi(void *this_, int row) {
  return (int)((QTableView*)this_)->rowHeight(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:85
// [4] int columnViewportPosition(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView22columnViewportPositionEi(void *this_, int column) {
  return (int)((QTableView*)this_)->columnViewportPosition(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:86
// [4] int columnAt(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView8columnAtEi(void *this_, int x) {
  return (int)((QTableView*)this_)->columnAt(x);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtableview.h:88
// [-2] void setColumnWidth(int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView14setColumnWidthEii(void *this_, int column, int width) {
  ((QTableView*)this_)->setColumnWidth(column, width);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:89
// [4] int columnWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView11columnWidthEi(void *this_, int column) {
  return (int)((QTableView*)this_)->columnWidth(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:91
// [1] bool isRowHidden(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView11isRowHiddenEi(void *this_, int row) {
  return (bool)((QTableView*)this_)->isRowHidden(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:92
// [-2] void setRowHidden(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12setRowHiddenEib(void *this_, int row, bool hide) {
  ((QTableView*)this_)->setRowHidden(row, hide);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:94
// [1] bool isColumnHidden(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView14isColumnHiddenEi(void *this_, int column) {
  return (bool)((QTableView*)this_)->isColumnHidden(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:95
// [-2] void setColumnHidden(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView15setColumnHiddenEib(void *this_, int column, bool hide) {
  ((QTableView*)this_)->setColumnHidden(column, hide);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:97
// [-2] void setSortingEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView17setSortingEnabledEb(void *this_, bool enable) {
  ((QTableView*)this_)->setSortingEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:98
// [1] bool isSortingEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView16isSortingEnabledEv(void *this_) {
  return (bool)((QTableView*)this_)->isSortingEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:100
// [1] bool showGrid()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView8showGridEv(void *this_) {
  return (bool)((QTableView*)this_)->showGrid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:102
// [4] Qt::PenStyle gridStyle()
extern "C" Q_DECL_EXPORT
Qt::PenStyle C_ZNK10QTableView9gridStyleEv(void *this_) {
  return (Qt::PenStyle)((QTableView*)this_)->gridStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:103
// [-2] void setGridStyle(Qt::PenStyle)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12setGridStyleEN2Qt8PenStyleE(void *this_, Qt::PenStyle style) {
  ((QTableView*)this_)->setGridStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:105
// [-2] void setWordWrap(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView11setWordWrapEb(void *this_, bool on) {
  ((QTableView*)this_)->setWordWrap(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:106
// [1] bool wordWrap()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView8wordWrapEv(void *this_) {
  return (bool)((QTableView*)this_)->wordWrap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:109
// [-2] void setCornerButtonEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView22setCornerButtonEnabledEb(void *this_, bool enable) {
  ((QTableView*)this_)->setCornerButtonEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:110
// [1] bool isCornerButtonEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView21isCornerButtonEnabledEv(void *this_) {
  return (bool)((QTableView*)this_)->isCornerButtonEnabled();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:113
// [16] QRect visualRect(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QTableView*)this_)->visualRect(*index);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:114
// [-2] void scrollTo(const QModelIndex &, QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QTableView*)this_)->scrollTo(*index, hint);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:115
// [24] QModelIndex indexAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView7indexAtERK6QPoint(void *this_, QPoint* p) {
  auto rv = ((QTableView*)this_)->indexAt(*p);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtableview.h:117
// [-2] void setSpan(int, int, int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView7setSpanEiiii(void *this_, int row, int column, int rowSpan, int columnSpan) {
  ((QTableView*)this_)->setSpan(row, column, rowSpan, columnSpan);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtableview.h:118
// [4] int rowSpan(int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView7rowSpanEii(void *this_, int row, int column) {
  return (int)((QTableView*)this_)->rowSpan(row, column);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtableview.h:119
// [4] int columnSpan(int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView10columnSpanEii(void *this_, int row, int column) {
  return (int)((QTableView*)this_)->columnSpan(row, column);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtableview.h:120
// [-2] void clearSpans()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView10clearSpansEv(void *this_) {
  ((QTableView*)this_)->clearSpans();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtableview.h:122
// [-2] void sortByColumn(int, Qt::SortOrder)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12sortByColumnEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTableView*)this_)->sortByColumn(column, order);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:125
// [-2] void selectRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView9selectRowEi(void *this_, int row) {
  ((QTableView*)this_)->selectRow(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:126
// [-2] void selectColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12selectColumnEi(void *this_, int column) {
  ((QTableView*)this_)->selectColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:127
// [-2] void hideRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView7hideRowEi(void *this_, int row) {
  ((QTableView*)this_)->hideRow(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:128
// [-2] void hideColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView10hideColumnEi(void *this_, int column) {
  ((QTableView*)this_)->hideColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:129
// [-2] void showRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView7showRowEi(void *this_, int row) {
  ((QTableView*)this_)->showRow(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:130
// [-2] void showColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView10showColumnEi(void *this_, int column) {
  ((QTableView*)this_)->showColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:131
// [-2] void resizeRowToContents(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView19resizeRowToContentsEi(void *this_, int row) {
  ((QTableView*)this_)->resizeRowToContents(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:132
// [-2] void resizeRowsToContents()
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView20resizeRowsToContentsEv(void *this_) {
  ((QTableView*)this_)->resizeRowsToContents();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:133
// [-2] void resizeColumnToContents(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView22resizeColumnToContentsEi(void *this_, int column) {
  ((QTableView*)this_)->resizeColumnToContents(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:134
// [-2] void resizeColumnsToContents()
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView23resizeColumnsToContentsEv(void *this_) {
  ((QTableView*)this_)->resizeColumnsToContents();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:135
// [-2] void sortByColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12sortByColumnEi(void *this_, int column) {
  ((QTableView*)this_)->sortByColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:136
// [-2] void setShowGrid(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView11setShowGridEb(void *this_, bool show) {
  ((QTableView*)this_)->setShowGrid(show);
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
