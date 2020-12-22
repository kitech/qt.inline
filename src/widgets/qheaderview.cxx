//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(itemviews)
// /usr/include/qt/QtWidgets/qheaderview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qheaderview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QHeaderView is pure virtual: false false
// QHeaderView has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHeaderView_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHeaderView_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHeaderView_t qt_meta_stringdata_MyQHeaderView = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQHeaderView"
  },
  "MyQHeaderView"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHeaderView[] = {
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
class Q_DECL_EXPORT MyQHeaderView : public QHeaderView {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QHeaderView::staticMetaObject,
  qt_meta_stringdata_MyQHeaderView.data,
  qt_meta_data_MyQHeaderView,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQHeaderView.stringdata0))
      return static_cast<void*>(this);
  return QHeaderView::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QHeaderView::qt_metacall(_c, _id, _a);
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
  virtual ~MyQHeaderView() {}
// void QHeaderView(Qt::Orientation, QWidget *)
MyQHeaderView(Qt::Orientation orientation, QWidget * parent) : QHeaderView(orientation, parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & old)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&old, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::currentChanged(current, old);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QHeaderView::event(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::paintEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::mousePressEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::mouseMoveEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::mouseReleaseEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::mouseDoubleClickEvent(e);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool viewportEvent(QEvent *)
  virtual bool viewportEvent(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QHeaderView::viewportEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void paintSection(QPainter *, const QRect &, int)
  virtual void paintSection(QPainter * painter, const QRect & rect, int logicalIndex) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintSection", &handled, 3, (uint64_t)painter, (uint64_t)&rect, (uint64_t)logicalIndex, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::paintSection(painter, rect, logicalIndex);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] QSize sectionSizeFromContents(int)
  virtual QSize sectionSizeFromContents(int logicalIndex) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sectionSizeFromContents", &handled, 1, (uint64_t)logicalIndex, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return QHeaderView::sectionSizeFromContents(logicalIndex);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [4] int horizontalOffset()
  virtual int horizontalOffset() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QHeaderView::horizontalOffset();
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [4] int verticalOffset()
  virtual int verticalOffset() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QHeaderView::verticalOffset();
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void updateGeometries()
  virtual void updateGeometries()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::updateGeometries();
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void dataChanged(const QModelIndex &, const QModelIndex &, const QVector<int> &)
  virtual void dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QVector<int> & roles)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dataChanged", &handled, 3, (uint64_t)&topLeft, (uint64_t)&bottomRight, (uint64_t)&roles, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::dataChanged(topLeft, bottomRight, roles);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void rowsInserted(const QModelIndex &, int, int)
  virtual void rowsInserted(const QModelIndex & parent, int start, int end_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end_, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::rowsInserted(parent, start, end_);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [16] QRect visualRect(const QModelIndex &)
  virtual QRect visualRect(const QModelIndex & index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visualRect", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRect){};}
    auto prv = (QRect*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRect
    } else {
    return QHeaderView::visualRect(index);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void scrollTo(const QModelIndex &, QAbstractItemView::ScrollHint)
  virtual void scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollTo", &handled, 2, (uint64_t)&index, (uint64_t)hint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::scrollTo(index, hint);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [24] QModelIndex indexAt(const QPoint &)
  virtual QModelIndex indexAt(const QPoint & p) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"indexAt", &handled, 1, (uint64_t)&p, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QModelIndex){};}
    auto prv = (QModelIndex*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QModelIndex
    } else {
    return QHeaderView::indexAt(p);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool isIndexHidden(const QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isIndexHidden", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QHeaderView::isIndexHidden(index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction arg0, QFlags<Qt::KeyboardModifier> arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveCursor", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QModelIndex){};}
    auto prv = (QModelIndex*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QModelIndex
    } else {
    return QHeaderView::moveCursor(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> flags)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::setSelection(rect, flags);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [8] QRegion visualRegionForSelection(const QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visualRegionForSelection", &handled, 1, (uint64_t)&selection, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRegion){};}
    auto prv = (QRegion*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRegion
    } else {
    return QHeaderView::visualRegionForSelection(selection);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QHeaderView_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQHeaderView* qo = (MyQHeaderView*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qheaderview(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:55
// [8] QString tr(const char *, const char *, int) 
// (10)qm49422725 (27)_ZN11QHeaderView2trEPKcS1_i
//static
/*void qm49422725(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QHeaderView::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QHeaderView::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:78
// [-2] void QHeaderView(Qt::Orientation, QWidget *) 
// (12)qm2846623887 (46)_ZN11QHeaderViewC2EN2Qt11OrientationEP7QWidget
/*void* qm2846623887(Qt::Orientation orientation, QWidget * parent)*/{
  auto _nilp = (MyQHeaderView*)(0);
  Qt::Orientation orientation = *(Qt::Orientation*)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QHeaderView(orientation, parent);
  this_ =  new MyQHeaderView(orientation, parent);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:93
// [4] int logicalIndexAt(int, int) const
// (12)qm2049275167 (36)_ZNK11QHeaderView14logicalIndexAtEii
//static
/*void qm2049275167(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QHeaderView*)this_)->logicalIndexAt(x, y);
   auto xptr = (int (QHeaderView::*)(int, int) const ) &QHeaderView::logicalIndexAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:94
// [4] int logicalIndexAt(const QPoint &) const
// (12)qm4054193284 (43)_ZNK11QHeaderView14logicalIndexAtERK6QPoint
//static
/*void qm4054193284(const QPoint & pos)*/ {
  const QPoint & pos = *(const QPoint *)this_;
  (void) ((QHeaderView*)this_)->logicalIndexAt(pos);
   auto xptr = (int (QHeaderView::*)(QPoint const&) const ) &QHeaderView::logicalIndexAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:109
// [-2] void hideSection(int) 
// (12)qm2822049228 (31)_ZN11QHeaderView11hideSectionEi
//static
/*void qm2822049228(int logicalIndex)*/ {
  int logicalIndex = *(int*)this_;
  (void) ((QHeaderView*)this_)->hideSection(logicalIndex);
   auto xptr = (void (QHeaderView::*)(int) ) &QHeaderView::hideSection;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:110
// [-2] void showSection(int) 
// (12)qm1613008459 (31)_ZN11QHeaderView11showSectionEi
//static
/*void qm1613008459(int logicalIndex)*/ {
  int logicalIndex = *(int*)this_;
  (void) ((QHeaderView*)this_)->showSection(logicalIndex);
   auto xptr = (void (QHeaderView::*)(int) ) &QHeaderView::showSection;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QHeaderViewD2Ev(void *this_)*/ {
  delete (QHeaderView*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qheaderview
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(itemviews)
#endif // #ifndef QT_MINIMAL
//  footer block end
