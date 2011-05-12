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
@property(readonly, retain) NSArray *remotes;	// G=0x3079415d; converted property
+ (id)sharedInstance;	// 0x30794385
- (id)init;	// 0x30794331
- (long)_init;	// 0x30794411
- (void)cancelLearning;	// 0x30793e9d
- (void)commitLearningRemote;	// 0x30793fc5
- (void)dealloc;	// 0x307943c1
- (void)deleteRemote:(id)remote;	// 0x307940b1
- (BOOL)isPairedWithAppleRemote;	// 0x307942c1
- (id)mcuVersion;	// 0x307942f1
- (void)pairAppleRemote;	// 0x30794269
- (void)processHIDEvent:(IOHIDEventRef)event;	// 0x30794569
- (id)propertyForKey:(id)key error:(id *)error;	// 0x307947c9
// converted property getter: - (id)remotes;	// 0x3079415d
- (void)rereadRemotes;	// 0x30794109
- (void)resetLearningRemote;	// 0x30794009
- (void)saveLearning;	// 0x30793ed5
- (void)setName:(id)name ofRemote:(id)remote;	// 0x3079403d
- (BOOL)setProperty:(id)property forKey:(id)key error:(id *)error;	// 0x307947f9
- (void)setSILState_HardwareProblem;	// 0x30793e11
- (void)setSILState_Off;	// 0x30793e81
- (void)setSILState_On;	// 0x30793e65
- (void)setSILState_RejectedCommand;	// 0x30793e2d
- (void)setSILState_Starting;	// 0x30793e49
- (void)setSILToState:(id)state;	// 0x30794865
- (void)sleepDisplay;	// 0x307941dd
- (void)startLearningUsagePage:(unsigned)page usageCode:(unsigned)code forRemoteUUID:(id)remoteUUID;	// 0x30793f1d
- (void)unpairAppleRemote;	// 0x30794211
- (void)wakeDisplay;	// 0x307941a9
@end
