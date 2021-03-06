/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library


@interface GQDTDurationFormat : NSObject <GQDNameMappable> {
	CFStringRef mFormatString;	// 4 = 0x4
}
+ (const StateSpec *)stateForReading;	// 0x32d26985
- (id)initWithFormatString:(CFStringRef)formatString;	// 0x32d26991
- (void)dealloc;	// 0x32d269dd
- (CFStringRef)formatString;	// 0x32d26a21
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x32d26a31
@end

