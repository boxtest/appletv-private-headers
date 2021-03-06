/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EBGraphic : NSObject {
}
+ (int)objectTypeForShape:(id)shape;	// 0x34be6315
+ (void)readChart:(id)chart chartIndex:(int)index state:(id)state;	// 0x34b4377d
+ (id)readGraphicWithDictionary:(id)dictionary state:(id)state;	// 0x34a8bd21
+ (void)readGraphicsInChart:(id)chart state:(id)state;	// 0x34b4643d
+ (void)readGraphicsWithState:(id)state;	// 0x34a8baed
+ (void)readImage:(id)image xlGraphicsInfo:(XlGraphicsInfo *)info state:(id)state;	// 0x34be6051
+ (id)readMainChartWithState:(id)state;	// 0x34b43425
+ (void)readNotesWithDictionary:(id)dictionary state:(id)state;	// 0x34a8e2ed
+ (void)readOle:(id)ole xlGraphicsInfo:(XlGraphicsInfo *)info state:(id)state;	// 0x34ba8c15
@end

