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

#ifndef _MAX32666_SPI_DMA_H_
#define _MAX32666_SPI_DMA_H_

//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------
#include <dma.h>
#include <spi.h>


//-----------------------------------------------------------------------------
// Defines
//-----------------------------------------------------------------------------



//-----------------------------------------------------------------------------
// Typedefs
//-----------------------------------------------------------------------------


//-----------------------------------------------------------------------------
// Function declarations
//-----------------------------------------------------------------------------
void spi_dma_int_handler(uint8_t ch, mxc_spi_regs_t *spi);
int spi_dma_master_init(mxc_spi_regs_t *spi, sys_map_t map, uint32_t speed, uint8_t quad);
int spi_dma(uint8_t ch, mxc_spi_regs_t *spi, uint8_t *data_out, uint8_t *data_in, uint32_t len, mxc_dma_reqsel_t reqsel, void (*callback)(void));
int spi_dma_wait(uint8_t ch, mxc_spi_regs_t *spi);
uint8_t spi_dma_busy_flag(uint8_t ch);

#endif /* _MAX32666_SPI_DMA_H_ */
