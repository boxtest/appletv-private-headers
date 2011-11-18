/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABShapeGeometry : NSObject {
}
+ (int)actualPathCommandForPathCommand:(int)pathCommand index:(unsigned short)index;	// 0x30cad885
+ (OADAdjustCoord)adjustCoordWithComputedValue:(EshComputedValue)computedValue;	// 0x30cad8b5
+ (void)appendAdjustPoint:(OADAdjustPoint)point toPathParams:(EshPathParamTable *)pathParams;	// 0x30eddb3d
+ (EshComputedValue)computedValueWithAdjustCoord:(OADAdjustCoord)adjustCoord;	// 0x30edd889
+ (void)readAdjustValuesFromShapeProperties:(const EshShapeProperties *)shapeProperties toGeometry:(id)geometry;	// 0x30c5d215
+ (void)readFromFormulas:(const EshTablePropVal<EshFormula> *)formulas toGeometry:(id)geometry;	// 0x30cad9d5
+ (void)readFromLimo:(CsPoint<long int>)limo toGeometry:(id)geometry;	// 0x30cadd71
+ (void)readFromPathCommands:(const EshTablePropVal<EshPathCommand> *)pathCommands pathParams:(const EshPathParamTable *)params toGeometry:(id)geometry;	// 0x30caca4d
+ (void)readFromShape:(EshShape *)shape toShape:(id)shape2;	// 0x30c5cb65
+ (void)readFromTextBoxRects:(const EshTablePropVal<EshComputedRect> *)textBoxRects toGeometry:(id)geometry;	// 0x30cadb51
+ (void)readGeometryCoordSpaceFromShapeProperties:(const EshShapeProperties *)shapeProperties toGeometry:(id)geometry;	// 0x30d2bbb1
+ (void)readLimoFromPath:(const EshPath *)path toGeometry:(id)geometry;	// 0x30d2bd09
+ (void)readPathCommandsAndParamsFromPath:(const EshPath *)path toGeometry:(id)geometry;	// 0x30d2be11
+ (void)writeAdjustValuesFromGeometry:(id)geometry toShapeProperties:(EshShapeProperties *)shapeProperties;	// 0x30edd89d
+ (void)writeCoordSpaceFromGeometry:(id)geometry toShapeProperties:(EshShapeProperties *)shapeProperties;	// 0x30edd8fd
+ (void)writeFormulasFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x30ede0ad
+ (void)writeFromShape:(id)shape toShape:(EshShape *)shape2;	// 0x30ede525
+ (void)writeLimoFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x30edda15
+ (void)writePathCommandsAndParamsFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x30eddb95
+ (void)writeTextBodyRectsFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x30ede2e9
@end

