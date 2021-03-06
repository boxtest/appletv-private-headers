/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface ATVSWUSlowUpdateRebootController : BRViewController {
	BOOL _attemptingToReboot;	// 104 = 0x68
	id _rebootBlock;	// 108 = 0x6c
}
@property(assign, nonatomic) BOOL attemptingToReboot;	// G=0x238b51; S=0x238b61; @synthesize=_attemptingToReboot
@property(copy, nonatomic) id rebootBlock;	// G=0x238b2d; S=0x238b41; @synthesize=_rebootBlock
- (id)init;	// 0x2386dd
- (id)initWithRebootBlock:(id)rebootBlock;	// 0x2386e9
- (void).cxx_destruct;	// 0x238b71
// declared property getter: - (BOOL)attemptingToReboot;	// 0x238b51
- (BOOL)brEventAction:(id)action;	// 0x238a5d
- (void)dealloc;	// 0x238865
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x238995
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2388a9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x238991
// declared property getter: - (id)rebootBlock;	// 0x238b2d
// declared property setter: - (void)setAttemptingToReboot:(BOOL)reboot;	// 0x238b61
// declared property setter: - (void)setRebootBlock:(id)block;	// 0x238b41
- (void)wasPushed;	// 0x238ac5
@end

