/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class AVItemErrorLogInternal, NSArray;

@interface AVItemErrorLog : NSObject <NSCopying> {
	AVItemErrorLogInternal *_playerItemErrorLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x363d05a9; 
- (id)init;	// 0x363d0289
- (id)initWithLogArray:(id)logArray;	// 0x363d0321
- (id)copyWithZone:(NSZone *)zone;	// 0x363d0459
- (void)dealloc;	// 0x363d04ad
- (id)description;	// 0x363d0375
// declared property getter: - (id)events;	// 0x363d05a9
- (id)extendedLogData;	// 0x363d0519
- (unsigned)extendedLogDataStringEncoding;	// 0x363d05a5
- (void)finalize;	// 0x363d0469
@end

