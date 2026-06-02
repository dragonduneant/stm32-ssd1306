#ifndef __SSD1306_TEST_H__
#define __SSD1306_TEST_H__

#if defined(__GNUC__)
#include <_ansi.h>
#endif

#ifdef __cplusplus 
#if defined(__GNUC__)
_BEGIN_STD_C
#elif defined(__IAR_SYSTEMS_ICC__)
extern "C" {
#else
#error "UNKNOWN COMPILER!"
#endif
#endif


void ssd1306_TestBorder(void);
void ssd1306_TestFonts1(void);
void ssd1306_TestFonts2(void);
void ssd1306_TestFPS(void);
void ssd1306_TestAll(void);
void ssd1306_TestLine(void);
void ssd1306_TestRectangle(void);
void ssd1306_TestRectangleFill(void);
void ssd1306_TestRectangleInvert(void);
void ssd1306_TestCircle(void);
void ssd1306_TestArc(void);
void ssd1306_TestPolyline(void);
void ssd1306_TestDrawBitmap(void);

#ifdef __cplusplus
#if defined(__GNUC__)
_END_STD_C
#elif defined(__IAR_SYSTEMS_ICC__)
}
#else
#error "UNKNOWN COMPILER!"
#endif
#endif

#endif // __SSD1306_TEST_H__
