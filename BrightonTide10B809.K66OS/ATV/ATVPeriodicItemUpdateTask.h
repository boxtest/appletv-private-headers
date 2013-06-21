/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"

@class BRMerchant, NSOperationQueue, NSURL, ATVURLDocument;
@protocol ATVUpdatable;

__attribute__((visibility("hidden")))
@interface ATVPeriodicItemUpdateTask : BRBackgroundTask {
	NSURL *_url;	// 44 = 0x2c
	BRMerchant *_merchant;	// 48 = 0x30
	id<ATVUpdatable> _updatableItem;	// 52 = 0x34
	NSOperationQueue *_callersQueue;	// 56 = 0x38
	ATVURLDocument *_currentDocument;	// 60 = 0x3c
}
@property(retain) BRMerchant *merchant;	// G=0x18bfc5; S=0x18bfd9; @synthesize=_merchant
@property(assign) id<ATVUpdatable> updatableItem;	// G=0x18bb79; S=0x18bb69; 
@property(retain) NSURL *url;	// G=0x18bfa1; S=0x18bfb5; @synthesize=_url
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x18ba49
- (void)_urlDocReady:(id)ready;	// 0x18bd21
- (void)dealloc;	// 0x18bac5
// declared property getter: - (id)merchant;	// 0x18bfc5
- (BOOL)perform:(id)perform;	// 0x18bb89
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x18bfd9
// declared property setter: - (void)setUpdatableItem:(id)item;	// 0x18bb69
// declared property setter: - (void)setUrl:(id)url;	// 0x18bfb5
// declared property getter: - (id)updatableItem;	// 0x18bb79
// declared property getter: - (id)url;	// 0x18bfa1
@end
