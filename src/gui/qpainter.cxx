// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qpainter.h
// dst-file: /src/gui/qpainter.cxx
//

// header block begin =>
#include <qpainter.h>

extern "C" {

int QPainter_Class_Size()
{
  return sizeof(QPainter);
}

// QPainter(class QPaintDevice *)
QPainter* dector_ZN8QPainterC1EP12QPaintDevice(QPaintDevice * arg1)
{
  // static_assert(sizeof(QPainter) == 32, "tyszerr");
  QPainter* rthis = new QPainter(arg1);
  return rthis;
}

// ~QPainter()
void dedtor_ZN8QPainterD0Ev(QPainter* that)
{
  QPainter* rthis = (QPainter*)that;
  delete rthis;
}

// QPainter()
QPainter* dector_ZN8QPainterC1Ev()
{
  // static_assert(sizeof(QPainter) == 32, "tyszerr");
  QPainter* rthis = new QPainter();
  return rthis;
}

  // proto:  void QPainter::fillRect(const QRect & r, Qt::GlobalColor c);
void demth_ZN8QPainter8fillRectERK5QRectN2Qt11GlobalColorE(void *that, const QRect & r, Qt::GlobalColor c)
{
  QPainter *cthat = (QPainter *)that;
   cthat->fillRect(r, c);
}

  // proto:  void QPainter::fillRect(int x, int y, int w, int h, const QColor & color);
void demth_ZN8QPainter8fillRectEiiiiRK6QColor(void *that, int x, int y, int w, int h, const QColor & color)
{
  QPainter *cthat = (QPainter *)that;
   cthat->fillRect(x, y, w, h, color);
}

  // proto:  void QPainter::drawText(int x, int y, const QString & s);
void demth_ZN8QPainter8drawTextEiiRK7QString(void *that, int x, int y, const QString & s)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawText(x, y, s);
}

  // proto:  void QPainter::drawImage(const QRectF & r, const QImage & image);
void demth_ZN8QPainter9drawImageERK6QRectFRK6QImage(void *that, const QRectF & r, const QImage & image)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawImage(r, image);
}

  // proto:  void QPainter::drawImage(const QPointF & p, const QImage & image, const QRectF & sr, Qt::ImageConversionFlags flags);
void demth_ZN8QPainter9drawImageERK7QPointFRK6QImageRK6QRectF6QFlagsIN2Qt19ImageConversionFlagEE(void *that, const QPointF & p, const QImage & image, const QRectF & sr, Qt::ImageConversionFlags flags)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawImage(p, image, sr, flags);
}

  // proto:  void QPainter::fillRect(int x, int y, int w, int h, Qt::BrushStyle style);
void demth_ZN8QPainter8fillRectEiiiiN2Qt10BrushStyleE(void *that, int x, int y, int w, int h, Qt::BrushStyle style)
{
  QPainter *cthat = (QPainter *)that;
   cthat->fillRect(x, y, w, h, style);
}

  // proto:  void QPainter::drawRects(const QVector<QRect> & rectangles);
void demth_ZN8QPainter9drawRectsERK7QVectorI5QRectE(void *that, const QVector<QRect> & rectangles)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawRects(rectangles);
}

  // proto:  void QPainter::drawChord(const QRect & , int a, int alen);
void demth_ZN8QPainter9drawChordERK5QRectii(void *that, const QRect & arg1, int a, int alen)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawChord(arg1, a, alen);
}

  // proto:  void QPainter::translate(const QPoint & offset);
void demth_ZN8QPainter9translateERK6QPoint(void *that, const QPoint & offset)
{
  QPainter *cthat = (QPainter *)that;
   cthat->translate(offset);
}

  // proto:  void QPainter::setBrushOrigin(int x, int y);
void demth_ZN8QPainter14setBrushOriginEii(void *that, int x, int y)
{
  QPainter *cthat = (QPainter *)that;
   cthat->setBrushOrigin(x, y);
}

  // proto:  void QPainter::drawEllipse(const QPoint & center, int rx, int ry);
void demth_ZN8QPainter11drawEllipseERK6QPointii(void *that, const QPoint & center, int rx, int ry)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawEllipse(center, rx, ry);
}

  // proto:  void QPainter::drawArc(int x, int y, int w, int h, int a, int alen);
void demth_ZN8QPainter7drawArcEiiiiii(void *that, int x, int y, int w, int h, int a, int alen)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawArc(x, y, w, h, a, alen);
}

  // proto:  void QPainter::drawPolyline(const QPolygonF & polyline);
void demth_ZN8QPainter12drawPolylineERK9QPolygonF(void *that, const QPolygonF & polyline)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPolyline(polyline);
}

  // proto:  void QPainter::drawStaticText(int left, int top, const QStaticText & staticText);
void demth_ZN8QPainter14drawStaticTextEiiRK11QStaticText(void *that, int left, int top, const QStaticText & staticText)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawStaticText(left, top, staticText);
}

  // proto:  void QPainter::drawPixmap(int x, int y, const QPixmap & pm, int sx, int sy, int sw, int sh);
void demth_ZN8QPainter10drawPixmapEiiRK7QPixmapiiii(void *that, int x, int y, const QPixmap & pm, int sx, int sy, int sw, int sh)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPixmap(x, y, pm, sx, sy, sw, sh);
}

  // proto:  void QPainter::drawPixmap(int x, int y, const QPixmap & pm);
void demth_ZN8QPainter10drawPixmapEiiRK7QPixmap(void *that, int x, int y, const QPixmap & pm)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPixmap(x, y, pm);
}

  // proto:  void QPainter::drawPolyline(const QPolygon & polygon);
void demth_ZN8QPainter12drawPolylineERK8QPolygon(void *that, const QPolygon & polygon)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPolyline(polygon);
}

  // proto:  void QPainter::drawTiledPixmap(const QRect & , const QPixmap & , const QPoint & );
void demth_ZN8QPainter15drawTiledPixmapERK5QRectRK7QPixmapRK6QPoint(void *that, const QRect & arg1, const QPixmap & arg2, const QPoint & arg3)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawTiledPixmap(arg1, arg2, arg3);
}

  // proto:  void QPainter::drawChord(int x, int y, int w, int h, int a, int alen);
void demth_ZN8QPainter9drawChordEiiiiii(void *that, int x, int y, int w, int h, int a, int alen)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawChord(x, y, w, h, a, alen);
}

  // proto:  void QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm);
void demth_ZN8QPainter10drawPixmapEiiiiRK7QPixmap(void *that, int x, int y, int w, int h, const QPixmap & pm)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPixmap(x, y, w, h, pm);
}

  // proto:  QRect QPainter::boundingRect(int x, int y, int w, int h, int flags, const QString & text);
QRect* demth_ZN8QPainter12boundingRectEiiiiiRK7QString(void *that, int x, int y, int w, int h, int flags, const QString & text)
{
  QPainter *cthat = (QPainter *)that;
  auto recret = cthat->boundingRect(x, y, w, h, flags, text);
  return new QRect(recret);
}

  // proto:  void QPainter::drawPie(int x, int y, int w, int h, int a, int alen);
void demth_ZN8QPainter7drawPieEiiiiii(void *that, int x, int y, int w, int h, int a, int alen)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPie(x, y, w, h, a, alen);
}

  // proto:  void QPainter::drawPixmap(const QPoint & p, const QPixmap & pm, const QRect & sr);
void demth_ZN8QPainter10drawPixmapERK6QPointRK7QPixmapRK5QRect(void *that, const QPoint & p, const QPixmap & pm, const QRect & sr)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPixmap(p, pm, sr);
}

  // proto:  void QPainter::drawImage(const QRect & targetRect, const QImage & image, const QRect & sourceRect, Qt::ImageConversionFlags flags);
void demth_ZN8QPainter9drawImageERK5QRectRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void *that, const QRect & targetRect, const QImage & image, const QRect & sourceRect, Qt::ImageConversionFlags flags)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawImage(targetRect, image, sourceRect, flags);
}

  // proto:  void QPainter::drawPoints(const QPolygon & points);
void demth_ZN8QPainter10drawPointsERK8QPolygon(void *that, const QPolygon & points)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPoints(points);
}

  // proto:  void QPainter::drawRects(const QVector<QRectF> & rectangles);
void demth_ZN8QPainter9drawRectsERK7QVectorI6QRectFE(void *that, const QVector<QRectF> & rectangles)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawRects(rectangles);
}

  // proto:  void QPainter::drawImage(int x, int y, const QImage & image, int sx, int sy, int sw, int sh, Qt::ImageConversionFlags flags);
void demth_ZN8QPainter9drawImageEiiRK6QImageiiii6QFlagsIN2Qt19ImageConversionFlagEE(void *that, int x, int y, const QImage & image, int sx, int sy, int sw, int sh, Qt::ImageConversionFlags flags)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawImage(x, y, image, sx, sy, sw, sh, flags);
}

  // proto:  void QPainter::drawPicture(const QPoint & p, const QPicture & picture);
void demth_ZN8QPainter11drawPictureERK6QPointRK8QPicture(void *that, const QPoint & p, const QPicture & picture)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPicture(p, picture);
}

  // proto:  void QPainter::fillRect(const QRectF & r, Qt::BrushStyle style);
void demth_ZN8QPainter8fillRectERK6QRectFN2Qt10BrushStyleE(void *that, const QRectF & r, Qt::BrushStyle style)
{
  QPainter *cthat = (QPainter *)that;
   cthat->fillRect(r, style);
}

  // proto:  void QPainter::fillRect(const QRectF & r, Qt::GlobalColor c);
void demth_ZN8QPainter8fillRectERK6QRectFN2Qt11GlobalColorE(void *that, const QRectF & r, Qt::GlobalColor c)
{
  QPainter *cthat = (QPainter *)that;
   cthat->fillRect(r, c);
}

  // proto:  void QPainter::drawLines(const QVector<QLine> & lines);
void demth_ZN8QPainter9drawLinesERK7QVectorI5QLineE(void *that, const QVector<QLine> & lines)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawLines(lines);
}

  // proto:  void QPainter::drawRect(int x1, int y1, int w, int h);
void demth_ZN8QPainter8drawRectEiiii(void *that, int x1, int y1, int w, int h)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawRect(x1, y1, w, h);
}

  // proto:  void QPainter::drawRect(const QRectF & rect);
void demth_ZN8QPainter8drawRectERK6QRectF(void *that, const QRectF & rect)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawRect(rect);
}

  // proto:  bool QPainter::testRenderHint(QPainter::RenderHint hint);
bool demth_ZNK8QPainter14testRenderHintENS_10RenderHintE(void *that, QPainter::RenderHint hint)
{
  QPainter *cthat = (QPainter *)that;
  return cthat->testRenderHint(hint);
}

  // proto:  void QPainter::drawLine(const QLineF & line);
void demth_ZN8QPainter8drawLineERK6QLineF(void *that, const QLineF & line)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawLine(line);
}

  // proto:  void QPainter::drawLine(const QPointF & p1, const QPointF & p2);
void demth_ZN8QPainter8drawLineERK7QPointFS2_(void *that, const QPointF & p1, const QPointF & p2)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawLine(p1, p2);
}

  // proto:  void QPainter::drawPixmap(const QRect & r, const QPixmap & pm);
void demth_ZN8QPainter10drawPixmapERK5QRectRK7QPixmap(void *that, const QRect & r, const QPixmap & pm)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPixmap(r, pm);
}

  // proto:  void QPainter::drawTiledPixmap(int x, int y, int w, int h, const QPixmap & , int sx, int sy);
void demth_ZN8QPainter15drawTiledPixmapEiiiiRK7QPixmapii(void *that, int x, int y, int w, int h, const QPixmap & arg5, int sx, int sy)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawTiledPixmap(x, y, w, h, arg5, sx, sy);
}

  // proto:  void QPainter::drawRoundedRect(const QRect & rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
void demth_ZN8QPainter15drawRoundedRectERK5QRectddN2Qt8SizeModeE(void *that, const QRect & rect, double xRadius, double yRadius, Qt::SizeMode mode)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawRoundedRect(rect, xRadius, yRadius, mode);
}

  // proto:  void QPainter::fillRect(int x, int y, int w, int h, Qt::GlobalColor c);
void demth_ZN8QPainter8fillRectEiiiiN2Qt11GlobalColorE(void *that, int x, int y, int w, int h, Qt::GlobalColor c)
{
  QPainter *cthat = (QPainter *)that;
   cthat->fillRect(x, y, w, h, c);
}

  // proto:  void QPainter::drawTextItem(int x, int y, const QTextItem & ti);
void demth_ZN8QPainter12drawTextItemEiiRK9QTextItem(void *that, int x, int y, const QTextItem & ti)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawTextItem(x, y, ti);
}

  // proto:  void QPainter::drawImage(const QPoint & p, const QImage & image, const QRect & sr, Qt::ImageConversionFlags flags);
void demth_ZN8QPainter9drawImageERK6QPointRK6QImageRK5QRect6QFlagsIN2Qt19ImageConversionFlagEE(void *that, const QPoint & p, const QImage & image, const QRect & sr, Qt::ImageConversionFlags flags)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawImage(p, image, sr, flags);
}

  // proto:  void QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm, int sx, int sy, int sw, int sh);
void demth_ZN8QPainter10drawPixmapEiiiiRK7QPixmapiiii(void *that, int x, int y, int w, int h, const QPixmap & pm, int sx, int sy, int sw, int sh)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPixmap(x, y, w, h, pm, sx, sy, sw, sh);
}

  // proto:  void QPainter::drawImage(const QPoint & p, const QImage & image);
void demth_ZN8QPainter9drawImageERK6QPointRK6QImage(void *that, const QPoint & p, const QImage & image)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawImage(p, image);
}

  // proto:  void QPainter::drawPie(const QRect & , int a, int alen);
void demth_ZN8QPainter7drawPieERK5QRectii(void *that, const QRect & arg1, int a, int alen)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPie(arg1, a, alen);
}

  // proto:  void QPainter::drawTextItem(const QPoint & p, const QTextItem & ti);
void demth_ZN8QPainter12drawTextItemERK6QPointRK9QTextItem(void *that, const QPoint & p, const QTextItem & ti)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawTextItem(p, ti);
}

  // proto:  void QPainter::drawPicture(int x, int y, const QPicture & picture);
void demth_ZN8QPainter11drawPictureEiiRK8QPicture(void *that, int x, int y, const QPicture & picture)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPicture(x, y, picture);
}

  // proto:  void QPainter::translate(qreal dx, qreal dy);
void demth_ZN8QPainter9translateEdd(void *that, double dx, double dy)
{
  QPainter *cthat = (QPainter *)that;
   cthat->translate(dx, dy);
}

  // proto:  void QPainter::setViewport(int x, int y, int w, int h);
void demth_ZN8QPainter11setViewportEiiii(void *that, int x, int y, int w, int h)
{
  QPainter *cthat = (QPainter *)that;
   cthat->setViewport(x, y, w, h);
}

  // proto:  void QPainter::drawRoundRect(const QRect & r, int xround, int yround);
void demth_ZN8QPainter13drawRoundRectERK5QRectii(void *that, const QRect & r, int xround, int yround)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawRoundRect(r, xround, yround);
}

  // proto:  void QPainter::drawPoints(const QPolygonF & points);
void demth_ZN8QPainter10drawPointsERK9QPolygonF(void *that, const QPolygonF & points)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPoints(points);
}

  // proto:  void QPainter::drawStaticText(const QPoint & topLeftPosition, const QStaticText & staticText);
void demth_ZN8QPainter14drawStaticTextERK6QPointRK11QStaticText(void *that, const QPoint & topLeftPosition, const QStaticText & staticText)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawStaticText(topLeftPosition, staticText);
}

  // proto:  void QPainter::fillRect(int x, int y, int w, int h, const QBrush & );
void demth_ZN8QPainter8fillRectEiiiiRK6QBrush(void *that, int x, int y, int w, int h, const QBrush & arg5)
{
  QPainter *cthat = (QPainter *)that;
   cthat->fillRect(x, y, w, h, arg5);
}

  // proto:  void QPainter::drawPoint(const QPoint & p);
void demth_ZN8QPainter9drawPointERK6QPoint(void *that, const QPoint & p)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPoint(p);
}

  // proto:  void QPainter::eraseRect(int x, int y, int w, int h);
void demth_ZN8QPainter9eraseRectEiiii(void *that, int x, int y, int w, int h)
{
  QPainter *cthat = (QPainter *)that;
   cthat->eraseRect(x, y, w, h);
}

  // proto:  void QPainter::drawLine(const QLine & line);
void demth_ZN8QPainter8drawLineERK5QLine(void *that, const QLine & line)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawLine(line);
}

  // proto:  void QPainter::drawLines(const QVector<QLineF> & lines);
void demth_ZN8QPainter9drawLinesERK7QVectorI6QLineFE(void *that, const QVector<QLineF> & lines)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawLines(lines);
}

  // proto:  void QPainter::drawPixmap(const QPointF & p, const QPixmap & pm, const QRectF & sr);
void demth_ZN8QPainter10drawPixmapERK7QPointFRK7QPixmapRK6QRectF(void *that, const QPointF & p, const QPixmap & pm, const QRectF & sr)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPixmap(p, pm, sr);
}

  // proto:  void QPainter::drawEllipse(const QPointF & center, qreal rx, qreal ry);
void demth_ZN8QPainter11drawEllipseERK7QPointFdd(void *that, const QPointF & center, double rx, double ry)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawEllipse(center, rx, ry);
}

  // proto:  void QPainter::setBrushOrigin(const QPoint & );
void demth_ZN8QPainter14setBrushOriginERK6QPoint(void *that, const QPoint & arg1)
{
  QPainter *cthat = (QPainter *)that;
   cthat->setBrushOrigin(arg1);
}

  // proto:  void QPainter::drawPixmap(const QPoint & p, const QPixmap & pm);
void demth_ZN8QPainter10drawPixmapERK6QPointRK7QPixmap(void *that, const QPoint & p, const QPixmap & pm)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPixmap(p, pm);
}

  // proto:  void QPainter::drawLine(int x1, int y1, int x2, int y2);
void demth_ZN8QPainter8drawLineEiiii(void *that, int x1, int y1, int x2, int y2)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawLine(x1, y1, x2, y2);
}

  // proto:  void QPainter::drawPoint(int x, int y);
void demth_ZN8QPainter9drawPointEii(void *that, int x, int y)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPoint(x, y);
}

  // proto:  void QPainter::drawPixmap(const QRect & targetRect, const QPixmap & pixmap, const QRect & sourceRect);
void demth_ZN8QPainter10drawPixmapERK5QRectRK7QPixmapS2_(void *that, const QRect & targetRect, const QPixmap & pixmap, const QRect & sourceRect)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPixmap(targetRect, pixmap, sourceRect);
}

  // proto:  void QPainter::drawLines(const QVector<QPoint> & pointPairs);
void demth_ZN8QPainter9drawLinesERK7QVectorI6QPointE(void *that, const QVector<QPoint> & pointPairs)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawLines(pointPairs);
}

  // proto:  void QPainter::drawPolygon(const QPolygon & polygon, Qt::FillRule fillRule);
void demth_ZN8QPainter11drawPolygonERK8QPolygonN2Qt8FillRuleE(void *that, const QPolygon & polygon, Qt::FillRule fillRule)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPolygon(polygon, fillRule);
}

  // proto:  void QPainter::drawLines(const QVector<QPointF> & pointPairs);
void demth_ZN8QPainter9drawLinesERK7QVectorI7QPointFE(void *that, const QVector<QPointF> & pointPairs)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawLines(pointPairs);
}

  // proto:  void QPainter::drawRect(const QRect & rect);
void demth_ZN8QPainter8drawRectERK5QRect(void *that, const QRect & rect)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawRect(rect);
}

  // proto:  void QPainter::setClipRect(int x, int y, int w, int h, Qt::ClipOperation op);
void demth_ZN8QPainter11setClipRectEiiiiN2Qt13ClipOperationE(void *that, int x, int y, int w, int h, Qt::ClipOperation op)
{
  QPainter *cthat = (QPainter *)that;
   cthat->setClipRect(x, y, w, h, op);
}

  // proto:  void QPainter::drawRoundedRect(int x, int y, int w, int h, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
void demth_ZN8QPainter15drawRoundedRectEiiiiddN2Qt8SizeModeE(void *that, int x, int y, int w, int h, double xRadius, double yRadius, Qt::SizeMode mode)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}

  // proto:  void QPainter::drawConvexPolygon(const QPolygonF & polygon);
void demth_ZN8QPainter17drawConvexPolygonERK9QPolygonF(void *that, const QPolygonF & polygon)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawConvexPolygon(polygon);
}

  // proto:  void QPainter::drawEllipse(int x, int y, int w, int h);
void demth_ZN8QPainter11drawEllipseEiiii(void *that, int x, int y, int w, int h)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawEllipse(x, y, w, h);
}

  // proto:  void QPainter::drawConvexPolygon(const QPolygon & polygon);
void demth_ZN8QPainter17drawConvexPolygonERK8QPolygon(void *that, const QPolygon & polygon)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawConvexPolygon(polygon);
}

  // proto:  void QPainter::drawRoundRect(int x, int y, int w, int h, int , int );
void demth_ZN8QPainter13drawRoundRectEiiiiii(void *that, int x, int y, int w, int h, int arg5, int arg6)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawRoundRect(x, y, w, h, arg5, arg6);
}

  // proto:  void QPainter::drawArc(const QRect & , int a, int alen);
void demth_ZN8QPainter7drawArcERK5QRectii(void *that, const QRect & arg1, int a, int alen)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawArc(arg1, a, alen);
}

  // proto:  void QPainter::drawText(int x, int y, int w, int h, int flags, const QString & text, QRect * br);
void demth_ZN8QPainter8drawTextEiiiiiRK7QStringP5QRect(void *that, int x, int y, int w, int h, int flags, const QString & text, QRect * br)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawText(x, y, w, h, flags, text, br);
}

  // proto:  void QPainter::eraseRect(const QRect & );
void demth_ZN8QPainter9eraseRectERK5QRect(void *that, const QRect & arg1)
{
  QPainter *cthat = (QPainter *)that;
   cthat->eraseRect(arg1);
}

  // proto:  void QPainter::drawImage(const QRect & r, const QImage & image);
void demth_ZN8QPainter9drawImageERK5QRectRK6QImage(void *that, const QRect & r, const QImage & image)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawImage(r, image);
}

  // proto:  void QPainter::fillRect(const QRect & r, Qt::BrushStyle style);
void demth_ZN8QPainter8fillRectERK5QRectN2Qt10BrushStyleE(void *that, const QRect & r, Qt::BrushStyle style)
{
  QPainter *cthat = (QPainter *)that;
   cthat->fillRect(r, style);
}

  // proto:  void QPainter::drawPoint(const QPointF & pt);
void demth_ZN8QPainter9drawPointERK7QPointF(void *that, const QPointF & pt)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPoint(pt);
}

  // proto:  void QPainter::drawPolygon(const QPolygonF & polygon, Qt::FillRule fillRule);
void demth_ZN8QPainter11drawPolygonERK9QPolygonFN2Qt8FillRuleE(void *that, const QPolygonF & polygon, Qt::FillRule fillRule)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawPolygon(polygon, fillRule);
}

  // proto:  void QPainter::drawLine(const QPoint & p1, const QPoint & p2);
void demth_ZN8QPainter8drawLineERK6QPointS2_(void *that, const QPoint & p1, const QPoint & p2)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawLine(p1, p2);
}

  // proto:  void QPainter::drawText(const QPoint & p, const QString & s);
void demth_ZN8QPainter8drawTextERK6QPointRK7QString(void *that, const QPoint & p, const QString & s)
{
  QPainter *cthat = (QPainter *)that;
   cthat->drawText(p, s);
}

  // proto:  void QPainter::setWindow(int x, int y, int w, int h);
void demth_ZN8QPainter9setWindowEiiii(void *that, int x, int y, int w, int h)
{
  QPainter *cthat = (QPainter *)that;
   cthat->setWindow(x, y, w, h);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

