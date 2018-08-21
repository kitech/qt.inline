//  header block begin
// /usr/include/qt/QtWidgets/qheaderview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qheaderview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QHeaderView is pure virtual: false
// QHeaderView has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQHeaderView : public QHeaderView {
public:
  virtual ~MyQHeaderView() {}
// void QHeaderView(Qt::Orientation, QWidget *)
MyQHeaderView(Qt::Orientation orientation, QWidget * parent) : QHeaderView(orientation, parent) {}
// Protected Visibility=Default Availability=Available
// [-2] void updateSection(int)
  virtual void updateSection(int logicalIndex) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateSection", &handled, 1, (uint64_t)logicalIndex, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::updateSection(logicalIndex);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void resizeSections()
  virtual void resizeSections() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeSections", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::resizeSections();
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void sectionsInserted(const QModelIndex &, int, int)
  virtual void sectionsInserted(const QModelIndex & parent, int logicalFirst, int logicalLast) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sectionsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)logicalFirst, (uint64_t)logicalLast, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::sectionsInserted(parent, logicalFirst, logicalLast);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void sectionsAboutToBeRemoved(const QModelIndex &, int, int)
  virtual void sectionsAboutToBeRemoved(const QModelIndex & parent, int logicalFirst, int logicalLast) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sectionsAboutToBeRemoved", &handled, 3, (uint64_t)&parent, (uint64_t)logicalFirst, (uint64_t)logicalLast, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::sectionsAboutToBeRemoved(parent, logicalFirst, logicalLast);
  }
  }

// void QHeaderView(QHeaderViewPrivate &, Qt::Orientation, QWidget *)
MyQHeaderView(QHeaderViewPrivate & dd, Qt::Orientation orientation, QWidget * parent) : QHeaderView(dd, orientation, parent) {}
// Protected Visibility=Default Availability=Available
// [-2] void initialize()
  virtual void initialize() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initialize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::initialize();
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void initializeSections()
  virtual void initializeSections() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initializeSections", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::initializeSections();
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void initializeSections(int, int)
  virtual void initializeSections(int start, int end) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initializeSections", &handled, 2, (uint64_t)start, (uint64_t)end, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::initializeSections(start, end);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & old) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&old, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::currentChanged(current, old);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QHeaderView::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::paintEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::mousePressEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::mouseMoveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::mouseReleaseEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::mouseDoubleClickEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool viewportEvent(QEvent *)
  virtual bool viewportEvent(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QHeaderView::viewportEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintSection(QPainter *, const QRect &, int)
  virtual void paintSection(QPainter * painter, const QRect & rect, int logicalIndex) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintSection", &handled, 3, (uint64_t)painter, (uint64_t)&rect, (uint64_t)logicalIndex, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::paintSection(painter, rect, logicalIndex);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QSize sectionSizeFromContents(int)
  virtual QSize sectionSizeFromContents(int logicalIndex) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sectionSizeFromContents", &handled, 1, (uint64_t)logicalIndex, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // Record Record QSize
    } else {
    return QHeaderView::sectionSizeFromContents(logicalIndex);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int horizontalOffset()
  virtual int horizontalOffset() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QHeaderView::horizontalOffset();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int verticalOffset()
  virtual int verticalOffset() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QHeaderView::verticalOffset();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateGeometries()
  virtual void updateGeometries() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::updateGeometries();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dataChanged(const QModelIndex &, const QModelIndex &, const QVector<int> &)
  virtual void dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QVector<int> & roles) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dataChanged", &handled, 3, (uint64_t)&topLeft, (uint64_t)&bottomRight, (uint64_t)&roles, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::dataChanged(topLeft, bottomRight, roles);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void rowsInserted(const QModelIndex &, int, int)
  virtual void rowsInserted(const QModelIndex & parent, int start, int end) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::rowsInserted(parent, start, end);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [16] QRect visualRect(const QModelIndex &)
  virtual QRect visualRect(const QModelIndex & index) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visualRect", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRect*)(irv);
      // Record Record QRect
    } else {
    return QHeaderView::visualRect(index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void scrollTo(const QModelIndex &, QAbstractItemView::ScrollHint)
  virtual void scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollTo", &handled, 2, (uint64_t)&index, (uint64_t)hint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::scrollTo(index, hint);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [24] QModelIndex indexAt(const QPoint &)
  virtual QModelIndex indexAt(const QPoint & p) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"indexAt", &handled, 1, (uint64_t)&p, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndex*)(irv);
      // Record Record QModelIndex
    } else {
    return QHeaderView::indexAt(p);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool isIndexHidden(const QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) const{
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
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction arg0, QFlags<Qt::KeyboardModifier> arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveCursor", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndex*)(irv);
      // Record Record QModelIndex
    } else {
    return QHeaderView::moveCursor(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> flags) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::setSelection(rect, flags);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QRegion visualRegionForSelection(const QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visualRegionForSelection", &handled, 1, (uint64_t)&selection, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRegion*)(irv);
      // Record Record QRegion
    } else {
    return QHeaderView::visualRegionForSelection(selection);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void initStyleOption(QStyleOptionHeader *)
  virtual void initStyleOption(QStyleOptionHeader * option) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHeaderView::initStyleOption(option);
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:205
// [-2] void updateSection(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView13updateSectionEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->QHeaderView::updateSection(logicalIndex);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:206
// [-2] void resizeSections()
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView14resizeSectionsEv(void *this_) {
  ((QHeaderView*)this_)->QHeaderView::resizeSections();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:207
// [-2] void sectionsInserted(const QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView16sectionsInsertedERK11QModelIndexii(void *this_, QModelIndex* parent, int logicalFirst, int logicalLast) {
  ((QHeaderView*)this_)->QHeaderView::sectionsInserted(*parent, logicalFirst, logicalLast);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:208
// [-2] void sectionsAboutToBeRemoved(const QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView24sectionsAboutToBeRemovedERK11QModelIndexii(void *this_, QModelIndex* parent, int logicalFirst, int logicalLast) {
  ((QHeaderView*)this_)->QHeaderView::sectionsAboutToBeRemoved(*parent, logicalFirst, logicalLast);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:212
// [-2] void initialize()
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView10initializeEv(void *this_) {
  ((QHeaderView*)this_)->QHeaderView::initialize();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:214
// [-2] void initializeSections()
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView18initializeSectionsEv(void *this_) {
  ((QHeaderView*)this_)->QHeaderView::initializeSections();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:215
// [-2] void initializeSections(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView18initializeSectionsEii(void *this_, int start, int end) {
  ((QHeaderView*)this_)->QHeaderView::initializeSections(start, end);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:216
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView14currentChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* old) {
  ((QHeaderView*)this_)->QHeaderView::currentChanged(*current, *old);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:218
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QHeaderView5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QHeaderView*)this_)->QHeaderView::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:219
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView10paintEventEP11QPaintEvent(void *this_, QPaintEvent * e) {
  ((QHeaderView*)this_)->QHeaderView::paintEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:220
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QHeaderView*)this_)->QHeaderView::mousePressEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:221
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QHeaderView*)this_)->QHeaderView::mouseMoveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:222
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QHeaderView*)this_)->QHeaderView::mouseReleaseEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:223
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QHeaderView*)this_)->QHeaderView::mouseDoubleClickEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:224
// [1] bool viewportEvent(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QHeaderView13viewportEventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QHeaderView*)this_)->QHeaderView::viewportEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:226
// [-2] void paintSection(QPainter *, const QRect &, int)
extern "C" Q_DECL_EXPORT
void C_ZNK11QHeaderView12paintSectionEP8QPainterRK5QRecti(void *this_, QPainter * painter, QRect* rect, int logicalIndex) {
  ((QHeaderView*)this_)->QHeaderView::paintSection(painter, *rect, logicalIndex);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:227
// [8] QSize sectionSizeFromContents(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHeaderView23sectionSizeFromContentsEi(void *this_, int logicalIndex) {
  auto rv = ((QHeaderView*)this_)->QHeaderView::sectionSizeFromContents(logicalIndex);
return new QSize(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:229
// [4] int horizontalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView16horizontalOffsetEv(void *this_) {
  return (int)((QHeaderView*)this_)->QHeaderView::horizontalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:230
// [4] int verticalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView14verticalOffsetEv(void *this_) {
  return (int)((QHeaderView*)this_)->QHeaderView::verticalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:231
// [-2] void updateGeometries()
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView16updateGeometriesEv(void *this_) {
  ((QHeaderView*)this_)->QHeaderView::updateGeometries();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:232
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QHeaderView*)this_)->QHeaderView::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:234
// [-2] void dataChanged(const QModelIndex &, const QModelIndex &, const QVector<int> &)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView11dataChangedERK11QModelIndexS2_RK7QVectorIiE(void *this_, QModelIndex* topLeft, QModelIndex* bottomRight, QVector<int>* roles) {
  ((QHeaderView*)this_)->QHeaderView::dataChanged(*topLeft, *bottomRight, *roles);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:235
// [-2] void rowsInserted(const QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView12rowsInsertedERK11QModelIndexii(void *this_, QModelIndex* parent, int start, int end) {
  ((QHeaderView*)this_)->QHeaderView::rowsInserted(*parent, start, end);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:237
// [16] QRect visualRect(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHeaderView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QHeaderView*)this_)->QHeaderView::visualRect(*index);
return new QRect(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:238
// [-2] void scrollTo(const QModelIndex &, QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QHeaderView*)this_)->QHeaderView::scrollTo(*index, hint);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:240
// [24] QModelIndex indexAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHeaderView7indexAtERK6QPoint(void *this_, QPoint* p) {
  auto rv = ((QHeaderView*)this_)->QHeaderView::indexAt(*p);
return new QModelIndex(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:241
// [1] bool isIndexHidden(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QHeaderView13isIndexHiddenERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QHeaderView*)this_)->QHeaderView::isIndexHidden(*index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:243
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHeaderView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QAbstractItemView::CursorAction arg0, QFlags<Qt::KeyboardModifier> arg1) {
  auto rv = ((QHeaderView*)this_)->QHeaderView::moveCursor(arg0, arg1);
return new QModelIndex(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:244
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QRect* rect, QFlags<QItemSelectionModel::SelectionFlag> flags) {
  ((QHeaderView*)this_)->QHeaderView::setSelection(*rect, flags);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:245
// [8] QRegion visualRegionForSelection(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHeaderView24visualRegionForSelectionERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QHeaderView*)this_)->QHeaderView::visualRegionForSelection(*selection);
return new QRegion(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:246
// [-2] void initStyleOption(QStyleOptionHeader *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QHeaderView15initStyleOptionEP18QStyleOptionHeader(void *this_, QStyleOptionHeader * option) {
  ((QHeaderView*)this_)->QHeaderView::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHeaderView10metaObjectEv(void *this_) {
  return (void*)((QHeaderView*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHeaderView11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QHeaderView*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QHeaderView11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QHeaderView*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHeaderView2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QHeaderView::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHeaderView6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QHeaderView::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:77
// [-2] void QHeaderView(Qt::Orientation, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHeaderViewC2EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent) {
  auto _nilp = (MyQHeaderView*)(0);
  return  new MyQHeaderView(orientation, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:78
// [-2] void ~QHeaderView()
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderViewD2Ev(void *this_) {
  delete (QHeaderView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:80
// [-2] void setModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QHeaderView*)this_)->setModel(model);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:82
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK11QHeaderView11orientationEv(void *this_) {
  return (Qt::Orientation)((QHeaderView*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:83
// [4] int offset()
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView6offsetEv(void *this_) {
  return (int)((QHeaderView*)this_)->offset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:84
// [4] int length()
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView6lengthEv(void *this_) {
  return (int)((QHeaderView*)this_)->length();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:85
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHeaderView8sizeHintEv(void *this_) {
  auto rv = ((QHeaderView*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:86
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView10setVisibleEb(void *this_, bool v) {
  ((QHeaderView*)this_)->setVisible(v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:87
// [4] int sectionSizeHint(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView15sectionSizeHintEi(void *this_, int logicalIndex) {
  return (int)((QHeaderView*)this_)->sectionSizeHint(logicalIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:89
// [4] int visualIndexAt(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView13visualIndexAtEi(void *this_, int position) {
  return (int)((QHeaderView*)this_)->visualIndexAt(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:90
// [4] int logicalIndexAt(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView14logicalIndexAtEi(void *this_, int position) {
  return (int)((QHeaderView*)this_)->logicalIndexAt(position);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:92
// [4] int logicalIndexAt(int, int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView14logicalIndexAtEii(void *this_, int x, int y) {
  return (int)((QHeaderView*)this_)->logicalIndexAt(x, y);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:93
// [4] int logicalIndexAt(const QPoint &)
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView14logicalIndexAtERK6QPoint(void *this_, QPoint* pos) {
  return (int)((QHeaderView*)this_)->logicalIndexAt(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:95
// [4] int sectionSize(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView11sectionSizeEi(void *this_, int logicalIndex) {
  return (int)((QHeaderView*)this_)->sectionSize(logicalIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:96
// [4] int sectionPosition(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView15sectionPositionEi(void *this_, int logicalIndex) {
  return (int)((QHeaderView*)this_)->sectionPosition(logicalIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:97
// [4] int sectionViewportPosition(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView23sectionViewportPositionEi(void *this_, int logicalIndex) {
  return (int)((QHeaderView*)this_)->sectionViewportPosition(logicalIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:99
// [-2] void moveSection(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView11moveSectionEii(void *this_, int from, int to) {
  ((QHeaderView*)this_)->moveSection(from, to);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qheaderview.h:100
// [-2] void swapSections(int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView12swapSectionsEii(void *this_, int first, int second) {
  ((QHeaderView*)this_)->swapSections(first, second);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:101
// [-2] void resizeSection(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView13resizeSectionEii(void *this_, int logicalIndex, int size) {
  ((QHeaderView*)this_)->resizeSection(logicalIndex, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:102
// [-2] void resizeSections(QHeaderView::ResizeMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView14resizeSectionsENS_10ResizeModeE(void *this_, QHeaderView::ResizeMode mode) {
  ((QHeaderView*)this_)->resizeSections(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:104
// [1] bool isSectionHidden(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QHeaderView15isSectionHiddenEi(void *this_, int logicalIndex) {
  return (bool)((QHeaderView*)this_)->isSectionHidden(logicalIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:105
// [-2] void setSectionHidden(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView16setSectionHiddenEib(void *this_, int logicalIndex, bool hide) {
  ((QHeaderView*)this_)->setSectionHidden(logicalIndex, hide);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qheaderview.h:106
// [4] int hiddenSectionCount()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView18hiddenSectionCountEv(void *this_) {
  return (int)((QHeaderView*)this_)->hiddenSectionCount();
}
#endif // QT_VERSION >= 0x040100

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:108
// [-2] void hideSection(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView11hideSectionEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->hideSection(logicalIndex);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:109
// [-2] void showSection(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView11showSectionEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->showSection(logicalIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:111
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView5countEv(void *this_) {
  return (int)((QHeaderView*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:112
// [4] int visualIndex(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView11visualIndexEi(void *this_, int logicalIndex) {
  return (int)((QHeaderView*)this_)->visualIndex(logicalIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:113
// [4] int logicalIndex(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView12logicalIndexEi(void *this_, int visualIndex) {
  return (int)((QHeaderView*)this_)->logicalIndex(visualIndex);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtWidgets/qheaderview.h:115
// [-2] void setSectionsMovable(bool)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView18setSectionsMovableEb(void *this_, bool movable) {
  ((QHeaderView*)this_)->setSectionsMovable(movable);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtWidgets/qheaderview.h:116
// [1] bool sectionsMovable()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK11QHeaderView15sectionsMovableEv(void *this_) {
  return (bool)((QHeaderView*)this_)->sectionsMovable();
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtWidgets/qheaderview.h:122
// [-2] void setSectionsClickable(bool)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView20setSectionsClickableEb(void *this_, bool clickable) {
  ((QHeaderView*)this_)->setSectionsClickable(clickable);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtWidgets/qheaderview.h:123
// [1] bool sectionsClickable()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK11QHeaderView17sectionsClickableEv(void *this_) {
  return (bool)((QHeaderView*)this_)->sectionsClickable();
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:129
// [-2] void setHighlightSections(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView20setHighlightSectionsEb(void *this_, bool highlight) {
  ((QHeaderView*)this_)->setHighlightSections(highlight);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:130
// [1] bool highlightSections()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QHeaderView17highlightSectionsEv(void *this_) {
  return (bool)((QHeaderView*)this_)->highlightSections();
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtWidgets/qheaderview.h:132
// [4] QHeaderView::ResizeMode sectionResizeMode(int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
QHeaderView::ResizeMode C_ZNK11QHeaderView17sectionResizeModeEi(void *this_, int logicalIndex) {
  return (QHeaderView::ResizeMode)((QHeaderView*)this_)->sectionResizeMode(logicalIndex);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:133
// [-2] void setSectionResizeMode(QHeaderView::ResizeMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView20setSectionResizeModeENS_10ResizeModeE(void *this_, QHeaderView::ResizeMode mode) {
  ((QHeaderView*)this_)->setSectionResizeMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:134
// [-2] void setSectionResizeMode(int, QHeaderView::ResizeMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView20setSectionResizeModeEiNS_10ResizeModeE(void *this_, int logicalIndex, QHeaderView::ResizeMode mode) {
  ((QHeaderView*)this_)->setSectionResizeMode(logicalIndex, mode);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qheaderview.h:136
// [-2] void setResizeContentsPrecision(int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView26setResizeContentsPrecisionEi(void *this_, int precision) {
  ((QHeaderView*)this_)->setResizeContentsPrecision(precision);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qheaderview.h:137
// [4] int resizeContentsPrecision()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView23resizeContentsPrecisionEv(void *this_) {
  return (int)((QHeaderView*)this_)->resizeContentsPrecision();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qheaderview.h:148
// [4] int stretchSectionCount()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView19stretchSectionCountEv(void *this_) {
  return (int)((QHeaderView*)this_)->stretchSectionCount();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:150
// [-2] void setSortIndicatorShown(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView21setSortIndicatorShownEb(void *this_, bool show) {
  ((QHeaderView*)this_)->setSortIndicatorShown(show);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:151
// [1] bool isSortIndicatorShown()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QHeaderView20isSortIndicatorShownEv(void *this_) {
  return (bool)((QHeaderView*)this_)->isSortIndicatorShown();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:153
// [-2] void setSortIndicator(int, Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView16setSortIndicatorEiN2Qt9SortOrderE(void *this_, int logicalIndex, Qt::SortOrder order) {
  ((QHeaderView*)this_)->setSortIndicator(logicalIndex, order);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:154
// [4] int sortIndicatorSection()
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView20sortIndicatorSectionEv(void *this_) {
  return (int)((QHeaderView*)this_)->sortIndicatorSection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:155
// [4] Qt::SortOrder sortIndicatorOrder()
extern "C" Q_DECL_EXPORT
Qt::SortOrder C_ZNK11QHeaderView18sortIndicatorOrderEv(void *this_) {
  return (Qt::SortOrder)((QHeaderView*)this_)->sortIndicatorOrder();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:157
// [1] bool stretchLastSection()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QHeaderView18stretchLastSectionEv(void *this_) {
  return (bool)((QHeaderView*)this_)->stretchLastSection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:158
// [-2] void setStretchLastSection(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView21setStretchLastSectionEb(void *this_, bool stretch) {
  ((QHeaderView*)this_)->setStretchLastSection(stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:160
// [1] bool cascadingSectionResizes()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QHeaderView23cascadingSectionResizesEv(void *this_) {
  return (bool)((QHeaderView*)this_)->cascadingSectionResizes();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:161
// [-2] void setCascadingSectionResizes(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView26setCascadingSectionResizesEb(void *this_, bool enable) {
  ((QHeaderView*)this_)->setCascadingSectionResizes(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:163
// [4] int defaultSectionSize()
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView18defaultSectionSizeEv(void *this_) {
  return (int)((QHeaderView*)this_)->defaultSectionSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:164
// [-2] void setDefaultSectionSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView21setDefaultSectionSizeEi(void *this_, int size) {
  ((QHeaderView*)this_)->setDefaultSectionSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:165
// [-2] void resetDefaultSectionSize()
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView23resetDefaultSectionSizeEv(void *this_) {
  ((QHeaderView*)this_)->resetDefaultSectionSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:167
// [4] int minimumSectionSize()
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView18minimumSectionSizeEv(void *this_) {
  return (int)((QHeaderView*)this_)->minimumSectionSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:168
// [-2] void setMinimumSectionSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView21setMinimumSectionSizeEi(void *this_, int size) {
  ((QHeaderView*)this_)->setMinimumSectionSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:169
// [4] int maximumSectionSize()
extern "C" Q_DECL_EXPORT
int C_ZNK11QHeaderView18maximumSectionSizeEv(void *this_) {
  return (int)((QHeaderView*)this_)->maximumSectionSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:170
// [-2] void setMaximumSectionSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView21setMaximumSectionSizeEi(void *this_, int size) {
  ((QHeaderView*)this_)->setMaximumSectionSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:172
// [4] Qt::Alignment defaultAlignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK11QHeaderView16defaultAlignmentEv(void *this_) {
  return (Qt::Alignment)((QHeaderView*)this_)->defaultAlignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:173
// [-2] void setDefaultAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView19setDefaultAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QHeaderView*)this_)->setDefaultAlignment(alignment);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:175
// [-2] void doItemsLayout()
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView13doItemsLayoutEv(void *this_) {
  ((QHeaderView*)this_)->doItemsLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:176
// [1] bool sectionsMoved()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QHeaderView13sectionsMovedEv(void *this_) {
  return (bool)((QHeaderView*)this_)->sectionsMoved();
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qheaderview.h:177
// [1] bool sectionsHidden()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
bool C_ZNK11QHeaderView14sectionsHiddenEv(void *this_) {
  return (bool)((QHeaderView*)this_)->sectionsHidden();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qheaderview.h:180
// [8] QByteArray saveState()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHeaderView9saveStateEv(void *this_) {
  auto rv = ((QHeaderView*)this_)->saveState();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qheaderview.h:181
// [1] bool restoreState(const QByteArray &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZN11QHeaderView12restoreStateERK10QByteArray(void *this_, QByteArray* state) {
  return (bool)((QHeaderView*)this_)->restoreState(*state);
}
#endif // QT_VERSION >= 0x040300

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:184
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView5resetEv(void *this_) {
  ((QHeaderView*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:187
// [-2] void setOffset(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView9setOffsetEi(void *this_, int offset) {
  ((QHeaderView*)this_)->setOffset(offset);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qheaderview.h:188
// [-2] void setOffsetToSectionPosition(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView26setOffsetToSectionPositionEi(void *this_, int visualIndex) {
  ((QHeaderView*)this_)->setOffsetToSectionPosition(visualIndex);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qheaderview.h:189
// [-2] void setOffsetToLastSection()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView22setOffsetToLastSectionEv(void *this_) {
  ((QHeaderView*)this_)->setOffsetToLastSection();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:190
// [-2] void headerDataChanged(Qt::Orientation, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView17headerDataChangedEN2Qt11OrientationEii(void *this_, Qt::Orientation orientation, int logicalFirst, int logicalLast) {
  ((QHeaderView*)this_)->headerDataChanged(orientation, logicalFirst, logicalLast);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:193
// [-2] void sectionMoved(int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView12sectionMovedEiii(void *this_, int logicalIndex, int oldVisualIndex, int newVisualIndex) {
  ((QHeaderView*)this_)->sectionMoved(logicalIndex, oldVisualIndex, newVisualIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:194
// [-2] void sectionResized(int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView14sectionResizedEiii(void *this_, int logicalIndex, int oldSize, int newSize) {
  ((QHeaderView*)this_)->sectionResized(logicalIndex, oldSize, newSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:195
// [-2] void sectionPressed(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView14sectionPressedEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionPressed(logicalIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:196
// [-2] void sectionClicked(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView14sectionClickedEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionClicked(logicalIndex);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qheaderview.h:197
// [-2] void sectionEntered(int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView14sectionEnteredEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionEntered(logicalIndex);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:198
// [-2] void sectionDoubleClicked(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView20sectionDoubleClickedEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionDoubleClicked(logicalIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:199
// [-2] void sectionCountChanged(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView19sectionCountChangedEii(void *this_, int oldCount, int newCount) {
  ((QHeaderView*)this_)->sectionCountChanged(oldCount, newCount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qheaderview.h:200
// [-2] void sectionHandleDoubleClicked(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView26sectionHandleDoubleClickedEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionHandleDoubleClicked(logicalIndex);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qheaderview.h:201
// [-2] void geometriesChanged()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView17geometriesChangedEv(void *this_) {
  ((QHeaderView*)this_)->geometriesChanged();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qheaderview.h:202
// [-2] void sortIndicatorChanged(int, Qt::SortOrder)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(void *this_, int logicalIndex, Qt::SortOrder order) {
  ((QHeaderView*)this_)->sortIndicatorChanged(logicalIndex, order);
}
#endif // QT_VERSION >= 0x040300

//  main block end
