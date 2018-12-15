//  header block begin

#ifndef QT_MINIMAL
// /usr/include/qt/QtWidgets/qlistview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlistview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QListView is pure virtual: false
// QListView has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQListView_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQListView_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQListView_t qt_meta_stringdata_MyQListView = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQListView"
  },
  "MyQListView"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQListView[] = {
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
class Q_DECL_EXPORT MyQListView : public QListView {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QListView::staticMetaObject,
  qt_meta_stringdata_MyQListView.data,
  qt_meta_data_MyQListView,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQListView.stringdata0))
      return static_cast<void*>(this);
  return QListView::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QListView::qt_metacall(_c, _id, _a);
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
  virtual ~MyQListView() {}
// void QListView(QWidget *)
MyQListView(QWidget * parent) : QListView(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QListView::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dataChanged(const QModelIndex &, const QModelIndex &, const QVector<int> &)
  virtual void dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QVector<int> & roles)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dataChanged", &handled, 3, (uint64_t)&topLeft, (uint64_t)&bottomRight, (uint64_t)&roles, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::dataChanged(topLeft, bottomRight, roles);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void rowsInserted(const QModelIndex &, int, int)
  virtual void rowsInserted(const QModelIndex & parent, int start, int end_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end_, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::rowsInserted(parent, start, end_);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void rowsAboutToBeRemoved(const QModelIndex &, int, int)
  virtual void rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowsAboutToBeRemoved", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end_, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::rowsAboutToBeRemoved(parent, start, end_);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::mouseMoveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::mouseReleaseEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::wheelEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::timerEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::resizeEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragMoveEvent(QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::dragMoveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::dragLeaveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::dropEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void startDrag(Qt::DropActions)
  virtual void startDrag(QFlags<Qt::DropAction> supportedActions)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"startDrag", &handled, 1, (uint64_t)supportedActions, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QListView::startDrag(supportedActions);
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
    return QListView::viewOptions();
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
    QListView::paintEvent(e);
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
    return QListView::horizontalOffset();
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
    return QListView::verticalOffset();
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
    return QListView::moveCursor(cursorAction, modifiers);
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
    QListView::setSelection(rect, command);
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
    return QListView::visualRegionForSelection(selection);
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
    return QListView::selectedIndexes();
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
    QListView::updateGeometries();
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
    return QListView::isIndexHidden(index);
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
    QListView::selectionChanged(selected, deselected);
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
    QListView::currentChanged(current, previous);
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
    return QListView::viewportSizeHint();
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QListView_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQListView* qo = (MyQListView*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:146
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QListView5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QListView*)this_)->QListView::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:148
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QListView*)this_)->QListView::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:153
// [-2] void dataChanged(const QModelIndex &, const QModelIndex &, const QVector<int> &)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView11dataChangedERK11QModelIndexS2_RK7QVectorIiE(void *this_, QModelIndex* topLeft, QModelIndex* bottomRight, QVector<int>* roles) {
  ((QListView*)this_)->QListView::dataChanged(*topLeft, *bottomRight, *roles);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:154
// [-2] void rowsInserted(const QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView12rowsInsertedERK11QModelIndexii(void *this_, QModelIndex* parent, int start, int end_) {
  ((QListView*)this_)->QListView::rowsInserted(*parent, start, end_);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:155
// [-2] void rowsAboutToBeRemoved(const QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView20rowsAboutToBeRemovedERK11QModelIndexii(void *this_, QModelIndex* parent, int start, int end_) {
  ((QListView*)this_)->QListView::rowsAboutToBeRemoved(*parent, start, end_);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:157
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QListView*)this_)->QListView::mouseMoveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:158
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QListView*)this_)->QListView::mouseReleaseEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:160
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * e) {
  ((QListView*)this_)->QListView::wheelEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:163
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView10timerEventEP11QTimerEvent(void *this_, QTimerEvent * e) {
  ((QListView*)this_)->QListView::timerEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:164
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * e) {
  ((QListView*)this_)->QListView::resizeEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:166
// [-2] void dragMoveEvent(QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * e) {
  ((QListView*)this_)->QListView::dragMoveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:167
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * e) {
  ((QListView*)this_)->QListView::dragLeaveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:168
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView9dropEventEP10QDropEvent(void *this_, QDropEvent * e) {
  ((QListView*)this_)->QListView::dropEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:169
// [-2] void startDrag(Qt::DropActions)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView9startDragE6QFlagsIN2Qt10DropActionEE(void *this_, QFlags<Qt::DropAction> supportedActions) {
  ((QListView*)this_)->QListView::startDrag(supportedActions);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:172
// [192] QStyleOptionViewItem viewOptions()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QListView11viewOptionsEv(void *this_) {
  auto rv = ((QListView*)this_)->QListView::viewOptions();
return new QStyleOptionViewItem(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:173
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView10paintEventEP11QPaintEvent(void *this_, QPaintEvent * e) {
  ((QListView*)this_)->QListView::paintEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:175
// [4] int horizontalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK9QListView16horizontalOffsetEv(void *this_) {
  return (int)((QListView*)this_)->QListView::horizontalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:176
// [4] int verticalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK9QListView14verticalOffsetEv(void *this_) {
  return (int)((QListView*)this_)->QListView::verticalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:177
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN9QListView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers) {
  auto rv = ((QListView*)this_)->QListView::moveCursor(cursorAction, modifiers);
return new QModelIndex(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:181
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QRect* rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QListView*)this_)->QListView::setSelection(*rect, command);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:182
// [8] QRegion visualRegionForSelection(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QListView24visualRegionForSelectionERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QListView*)this_)->QListView::visualRegionForSelection(*selection);
return new QRegion(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:183
// [8] QModelIndexList selectedIndexes()
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK9QListView15selectedIndexesEv(void *this_) {
  auto rv = ((QListView*)this_)->QListView::selectedIndexes();
return new QModelIndexList(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:185
// [-2] void updateGeometries()
extern "C" Q_DECL_EXPORT
void C_ZN9QListView16updateGeometriesEv(void *this_) {
  ((QListView*)this_)->QListView::updateGeometries();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:187
// [1] bool isIndexHidden(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QListView13isIndexHiddenERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QListView*)this_)->QListView::isIndexHidden(*index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:189
// [-2] void selectionChanged(const QItemSelection &, const QItemSelection &)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView16selectionChangedERK14QItemSelectionS2_(void *this_, QItemSelection* selected, QItemSelection* deselected) {
  ((QListView*)this_)->QListView::selectionChanged(*selected, *deselected);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:190
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView14currentChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QListView*)this_)->QListView::currentChanged(*current, *previous);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:192
// [8] QSize viewportSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QListView16viewportSizeHintEv(void *this_) {
  auto rv = ((QListView*)this_)->QListView::viewportSizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QListView10metaObjectEv(void *this_) {
  return (void*)((QListView*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QListView11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QListView*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QListView11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QListView*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QListView2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QListView::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QListView6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QListView::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:82
// [-2] void QListView(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QListViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQListView*)(0);
  return  new MyQListView(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:83
// [-2] void ~QListView()
extern "C" Q_DECL_EXPORT
void C_ZN9QListViewD2Ev(void *this_) {
  delete (QListView*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:85
// [-2] void setMovement(QListView::Movement)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView11setMovementENS_8MovementE(void *this_, QListView::Movement movement) {
  ((QListView*)this_)->setMovement(movement);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:86
// [4] QListView::Movement movement()
extern "C" Q_DECL_EXPORT
QListView::Movement C_ZNK9QListView8movementEv(void *this_) {
  return (QListView::Movement)((QListView*)this_)->movement();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:88
// [-2] void setFlow(QListView::Flow)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView7setFlowENS_4FlowE(void *this_, QListView::Flow flow) {
  ((QListView*)this_)->setFlow(flow);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:89
// [4] QListView::Flow flow()
extern "C" Q_DECL_EXPORT
QListView::Flow C_ZNK9QListView4flowEv(void *this_) {
  return (QListView::Flow)((QListView*)this_)->flow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:91
// [-2] void setWrapping(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView11setWrappingEb(void *this_, bool enable) {
  ((QListView*)this_)->setWrapping(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:92
// [1] bool isWrapping()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QListView10isWrappingEv(void *this_) {
  return (bool)((QListView*)this_)->isWrapping();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:94
// [-2] void setResizeMode(QListView::ResizeMode)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView13setResizeModeENS_10ResizeModeE(void *this_, QListView::ResizeMode mode) {
  ((QListView*)this_)->setResizeMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:95
// [4] QListView::ResizeMode resizeMode()
extern "C" Q_DECL_EXPORT
QListView::ResizeMode C_ZNK9QListView10resizeModeEv(void *this_) {
  return (QListView::ResizeMode)((QListView*)this_)->resizeMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:97
// [-2] void setLayoutMode(QListView::LayoutMode)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView13setLayoutModeENS_10LayoutModeE(void *this_, QListView::LayoutMode mode) {
  ((QListView*)this_)->setLayoutMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:98
// [4] QListView::LayoutMode layoutMode()
extern "C" Q_DECL_EXPORT
QListView::LayoutMode C_ZNK9QListView10layoutModeEv(void *this_) {
  return (QListView::LayoutMode)((QListView*)this_)->layoutMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:100
// [-2] void setSpacing(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView10setSpacingEi(void *this_, int space) {
  ((QListView*)this_)->setSpacing(space);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:101
// [4] int spacing()
extern "C" Q_DECL_EXPORT
int C_ZNK9QListView7spacingEv(void *this_) {
  return (int)((QListView*)this_)->spacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:103
// [-2] void setBatchSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView12setBatchSizeEi(void *this_, int batchSize) {
  ((QListView*)this_)->setBatchSize(batchSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:104
// [4] int batchSize()
extern "C" Q_DECL_EXPORT
int C_ZNK9QListView9batchSizeEv(void *this_) {
  return (int)((QListView*)this_)->batchSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:106
// [-2] void setGridSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView11setGridSizeERK5QSize(void *this_, QSize* size) {
  ((QListView*)this_)->setGridSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:107
// [8] QSize gridSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QListView8gridSizeEv(void *this_) {
  auto rv = ((QListView*)this_)->gridSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:109
// [-2] void setViewMode(QListView::ViewMode)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView11setViewModeENS_8ViewModeE(void *this_, QListView::ViewMode mode) {
  ((QListView*)this_)->setViewMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:110
// [4] QListView::ViewMode viewMode()
extern "C" Q_DECL_EXPORT
QListView::ViewMode C_ZNK9QListView8viewModeEv(void *this_) {
  return (QListView::ViewMode)((QListView*)this_)->viewMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:112
// [-2] void clearPropertyFlags()
extern "C" Q_DECL_EXPORT
void C_ZN9QListView18clearPropertyFlagsEv(void *this_) {
  ((QListView*)this_)->clearPropertyFlags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:114
// [1] bool isRowHidden(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QListView11isRowHiddenEi(void *this_, int row) {
  return (bool)((QListView*)this_)->isRowHidden(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:115
// [-2] void setRowHidden(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView12setRowHiddenEib(void *this_, int row, bool hide) {
  ((QListView*)this_)->setRowHidden(row, hide);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:117
// [-2] void setModelColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView14setModelColumnEi(void *this_, int column) {
  ((QListView*)this_)->setModelColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:118
// [4] int modelColumn()
extern "C" Q_DECL_EXPORT
int C_ZNK9QListView11modelColumnEv(void *this_) {
  return (int)((QListView*)this_)->modelColumn();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:120
// [-2] void setUniformItemSizes(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView19setUniformItemSizesEb(void *this_, bool enable) {
  ((QListView*)this_)->setUniformItemSizes(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:121
// [1] bool uniformItemSizes()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QListView16uniformItemSizesEv(void *this_) {
  return (bool)((QListView*)this_)->uniformItemSizes();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:123
// [-2] void setWordWrap(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView11setWordWrapEb(void *this_, bool on) {
  ((QListView*)this_)->setWordWrap(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:124
// [1] bool wordWrap()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QListView8wordWrapEv(void *this_) {
  return (bool)((QListView*)this_)->wordWrap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:126
// [-2] void setSelectionRectVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView23setSelectionRectVisibleEb(void *this_, bool show) {
  ((QListView*)this_)->setSelectionRectVisible(show);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:127
// [1] bool isSelectionRectVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QListView22isSelectionRectVisibleEv(void *this_) {
  return (bool)((QListView*)this_)->isSelectionRectVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:129
// [-2] void setItemAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView16setItemAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QListView*)this_)->setItemAlignment(alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:130
// [4] Qt::Alignment itemAlignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK9QListView13itemAlignmentEv(void *this_) {
  return (Qt::Alignment)((QListView*)this_)->itemAlignment();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:132
// [16] QRect visualRect(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QListView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QListView*)this_)->visualRect(*index);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:133
// [-2] void scrollTo(const QModelIndex &, QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QListView*)this_)->scrollTo(*index, hint);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:134
// [24] QModelIndex indexAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QListView7indexAtERK6QPoint(void *this_, QPoint* p) {
  auto rv = ((QListView*)this_)->indexAt(*p);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:136
// [-2] void doItemsLayout()
extern "C" Q_DECL_EXPORT
void C_ZN9QListView13doItemsLayoutEv(void *this_) {
  ((QListView*)this_)->doItemsLayout();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:137
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN9QListView5resetEv(void *this_) {
  ((QListView*)this_)->reset();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistview.h:138
// [-2] void setRootIndex(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN9QListView12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QListView*)this_)->setRootIndex(*index);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlistview.h:141
// [-2] void indexesMoved(const QModelIndexList &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN9QListView12indexesMovedERK5QListI11QModelIndexE(void *this_, const QModelIndexList & indexes) {
  ((QListView*)this_)->indexesMoved(indexes);
}
#endif // QT_VERSION >= 0x040200

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
