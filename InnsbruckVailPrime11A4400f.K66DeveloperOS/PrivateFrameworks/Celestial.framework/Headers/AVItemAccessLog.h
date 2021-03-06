/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"

@class AVItemAccessLogInternal, NSArray;

@interface AVItemAccessLog : NSObject <NSCopying> {
	AVItemAccessLogInternal *_playerItemAccessLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x30363dd9; 
- (id)init;	// 0x30363ab5
- (id)initWithLogArray:(id)logArray;	// 0x30363b4d
- (id)copyWithZone:(NSZone *)zone;	// 0x30363c85
- (void)dealloc;	// 0x30363cd9
- (id)description;	// 0x30363ba1
// declared property getter: - (id)events;	// 0x30363dd9
- (id)extendedLogData;	// 0x30363d49
- (unsigned)extendedLogDataStringEncoding;	// 0x30363dd5
- (void)finalize;	// 0x30363c95
@end

