/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "NetflixNrdObjectProtocol.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NetflixNrdObject : NSObject <NetflixNrdObjectProtocol> {
@private
	NSMutableDictionary *pendingSetProp_;	// 4 = 0x4
	NSMutableDictionary *currentSetProp_;	// 8 = 0x8
}
@property(retain) NSMutableDictionary *currentSetProp;	// G=0x360e538c; S=0x360e5358; @synthesize=currentSetProp_
@property(retain) NSMutableDictionary *pendingSetProp;	// G=0x360e5338; S=0x360e5304; @synthesize=pendingSetProp_
+ (id)sharedInstance;	// 0x360e51bc
- (id)init;	// 0x360e50ec
// declared property getter: - (id)currentSetProp;	// 0x360e538c
- (void)dealloc;	// 0x360e596c
- (void)invoke:(id)invoke method:(id)method args:(id)args;	// 0x360e5500
// declared property getter: - (id)pendingSetProp;	// 0x360e5338
- (void)post:(id)post;	// 0x360e53ac
// declared property setter: - (void)setCurrentSetProp:(id)prop;	// 0x360e5358
// declared property setter: - (void)setPendingSetProp:(id)prop;	// 0x360e5304
- (void)setProperty:(id)property property:(id)property2 value:(id)value;	// 0x360e5784
@end
