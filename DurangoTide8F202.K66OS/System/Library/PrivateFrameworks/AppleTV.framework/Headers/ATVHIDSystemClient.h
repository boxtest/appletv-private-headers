/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSArray;

@interface ATVHIDSystemClient : NSObject {
@private
	IOHIDEventSystemClientRef _hidSystemClient;	// 4 = 0x4
	IOHIDServiceClientRef _appleTVIRService;	// 8 = 0x8
	NSArray *_remotes;	// 12 = 0xc
}
@property(readonly, retain) NSArray *remotes;	// G=0x336fb15d; converted property
+ (id)sharedInstance;	// 0x336fb385
- (id)init;	// 0x336fb331
- (long)_init;	// 0x336fb411
- (void)cancelLearning;	// 0x336fae9d
- (void)commitLearningRemote;	// 0x336fafc5
- (void)dealloc;	// 0x336fb3c1
- (void)deleteRemote:(id)remote;	// 0x336fb0b1
- (BOOL)isPairedWithAppleRemote;	// 0x336fb2c1
- (id)mcuVersion;	// 0x336fb2f1
- (void)pairAppleRemote;	// 0x336fb269
- (void)processHIDEvent:(IOHIDEventRef)event;	// 0x336fb569
- (id)propertyForKey:(id)key error:(id *)error;	// 0x336fb7c9
// converted property getter: - (id)remotes;	// 0x336fb15d
- (void)rereadRemotes;	// 0x336fb109
- (void)resetLearningRemote;	// 0x336fb009
- (void)saveLearning;	// 0x336faed5
- (void)setName:(id)name ofRemote:(id)remote;	// 0x336fb03d
- (BOOL)setProperty:(id)property forKey:(id)key error:(id *)error;	// 0x336fb7f9
- (void)setSILState_HardwareProblem;	// 0x336fae11
- (void)setSILState_Off;	// 0x336fae81
- (void)setSILState_On;	// 0x336fae65
- (void)setSILState_RejectedCommand;	// 0x336fae2d
- (void)setSILState_Starting;	// 0x336fae49
- (void)setSILToState:(id)state;	// 0x336fb865
- (void)sleepDisplay;	// 0x336fb1dd
- (void)startLearningUsagePage:(unsigned)page usageCode:(unsigned)code forRemoteUUID:(id)remoteUUID;	// 0x336faf1d
- (void)unpairAppleRemote;	// 0x336fb211
- (void)wakeDisplay;	// 0x336fb1a9
@end
