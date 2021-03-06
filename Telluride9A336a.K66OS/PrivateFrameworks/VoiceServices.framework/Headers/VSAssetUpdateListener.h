/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject {
	BOOL _isListening;	// 4 = 0x4
	PCPersistentTimer *_assetCleanupTimer;	// 8 = 0x8
}
+ (id)sharedListener;	// 0x328eb3d9
- (id)init;	// 0x328eb389
- (void)_cancelAssetCleanupTimer;	// 0x328eb405
- (void)_cleanupAssets;	// 0x328eb6f5
- (void)_flushLanguageChanges;	// 0x328eb751
- (id)_initShared;	// 0x328eb38d
- (void)_rescheduleAssetCleanup;	// 0x328eba09
- (void)_scheduleNextCleanupForDate:(id)date;	// 0x328eb44d
- (void)_spokenLanguageChanged:(id)changed;	// 0x328eb679
- (void)_updateNextCleanupDate;	// 0x328eb5d5
- (void)dealloc;	// 0x328eba7d
- (void)startListening;	// 0x328eb93d
- (void)stopListening;	// 0x328eb865
@end

