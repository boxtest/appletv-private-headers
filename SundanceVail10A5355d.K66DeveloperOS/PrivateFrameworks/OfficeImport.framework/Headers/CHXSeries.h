/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CHXSeries : NSObject {
}
+ (id)chdSeriesFromXmlSeriesElement:(xmlNode *)xmlSeriesElement state:(id)state;	// 0x31d20ed5
+ (Class)chxSeriesClassWithState:(id)state;	// 0x31d20d75
+ (id)readFrom:(xmlNode *)from state:(id)state;	// 0x31d2044d
+ (void)resolveSeriesStyle:(id)style state:(id)state;	// 0x31d23c2d
@end

