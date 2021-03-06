/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHChart : NSObject {
}
+ (CFStringRef)createChartImageUrlString:(id)string state:(id)state;	// 0x304ae045
+ (id)geometry:(id)geometry;	// 0x304adcf5
+ (int)handleFloatingChart:(id)chart state:(id)state;	// 0x304add2d
+ (int)handleInlineChart:(id)chart state:(id)state;	// 0x304add09
+ (int)handleInlineChart:(id)chart state:(id)state imageUrl:(CFStringRef)url;	// 0x304adead
+ (char *)pdfId:(id)anId;	// 0x304adce1
+ (CFDataRef)renderChart:(id)chart;	// 0x304ae03d
@end

