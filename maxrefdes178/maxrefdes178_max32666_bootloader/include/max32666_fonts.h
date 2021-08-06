/*******************************************************************************
 * Copyright (C) Maxim Integrated Products, Inc., All rights Reserved.
 *
 * This software is protected by copyright laws of the United States and
 * of foreign countries. This material may also be protected by patent laws
 * and technology transfer regulations of the United States and of foreign
 * countries. This software is furnished under a license agreement and/or a
 * nondisclosure agreement and may only be used or reproduced in accordance
 * with the terms of those agreements. Dissemination of this information to
 * any party or parties not specified in the license agreement and/or
 * nondisclosure agreement is expressly prohibited.
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of Maxim Integrated
 * Products, Inc. shall not be used except as stated in the Maxim Integrated
 * Products, Inc. Branding Policy.
 *
 * The mere transfer of this software does not imply any licenses
 * of trade secrets, proprietary technology, copyrights, patents,
 * trademarks, maskwork rights, or any other form of intellectual
 * property whatsoever. Maxim Integrated Products, Inc. retains all
 * ownership rights.
 *******************************************************************************
 */

#ifndef _MAX32666_FONT_H_
#define _MAX32666_FONT_H_

//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------
#include <stdint.h>


//-----------------------------------------------------------------------------
// Defines
//-----------------------------------------------------------------------------
#define WHITE 0xFFFF
#define BLACK 0x0000
#define BLUE 0x001F
#define RED 0xF800
#define MAGENTA 0xF81F
#define GREEN 0x07E0
#define CYAN 0x7FFF
#define YELLOW 0xFFE0
#define ORANGE 0xFD60
#define GRAY 0X8430
#define BRED 0XF81F
#define GRED 0XFFE0
#define GBLUE 0X07FF
#define BROWN 0XBC40
#define BRRED 0XFC07
#define DARKBLUE 0X01CF
#define LIGHTBLUE 0X7D7C
#define GRAYBLUE 0X5458
#define LIGHTGREEN 0X841F
#define LGRAY 0XC618
#define LGRAYBLUE 0XA651
#define LBBLUE 0X2B12


//-----------------------------------------------------------------------------
// Typedefs
//-----------------------------------------------------------------------------
typedef struct {
    const uint8_t width;
    const uint8_t height;
    const uint16_t *data;
} FontDef;


//-----------------------------------------------------------------------------
// Global variables
//-----------------------------------------------------------------------------
extern const FontDef Font_7x10;
extern const FontDef Font_11x18;
extern const FontDef Font_16x26;


//-----------------------------------------------------------------------------
// Function declarations
//-----------------------------------------------------------------------------
void fonts_putString(uint16_t x, uint16_t y, const char *str, const FontDef *font, uint16_t color, uint8_t bg, uint16_t bgcolor, uint8_t *buff);
void fonts_putStringOver(uint16_t x, uint16_t y, const char *str, const FontDef *font, uint16_t color, uint8_t bg, uint16_t bgcolor, uint8_t *buff);
void fonts_putStringCentered(uint16_t y, const char *str, const FontDef *font, uint16_t color, uint8_t *buff);
void fonts_drawRectangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color, uint8_t *buff);
void fonts_drawThickRectangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color, uint8_t thickness, uint8_t *buff);
void fonts_drawFilledRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t color, uint8_t *buff);
void fonts_drawLine(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint16_t color, uint8_t *buff);

#endif /* _MAX32666_FONT_H_ */
