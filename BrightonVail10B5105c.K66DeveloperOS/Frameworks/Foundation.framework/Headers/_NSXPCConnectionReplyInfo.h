/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSBlock, NSString, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionReplyInfo : NSObject {
	NSBlock *_replyBlock;	// 4 = 0x4
	id _errorBlock;	// 8 = 0x8
	id _cleanupBlock;	// 12 = 0xc
	NSString *_selector;	// 16 = 0x10
	NSXPCInterface *_interface;	// 20 = 0x14
}
@property(copy) id cleanupBlock;	// G=0x360b6bbd; S=0x360b2a69; @synthesize=_cleanupBlock
@property(copy) id errorBlock;	// G=0x361cfa99; S=0x360b2a59; @synthesize=_errorBlock
@property(retain) NSXPCInterface *interface;	// G=0x360b4901; S=0x360b2a79; @synthesize=_interface
@property(copy) NSBlock *replyBlock;	// G=0x360b6b79; S=0x360b2a49; @synthesize=_replyBlock
@property(copy) NSString *selector;	// G=0x360b4929; S=0x360b2a89; @synthesize=_selector
// declared property getter: - (id)cleanupBlock;	// 0x360b6bbd
- (void)dealloc;	// 0x360b6cdd
// declared property getter: - (id)errorBlock;	// 0x361cfa99
// declared property getter: - (id)interface;	// 0x360b4901
// declared property getter: - (id)replyBlock;	// 0x360b6b79
// declared property getter: - (id)selector;	// 0x360b4929
// declared property setter: - (void)setCleanupBlock:(id)block;	// 0x360b2a69
// declared property setter: - (void)setErrorBlock:(id)block;	// 0x360b2a59
// declared property setter: - (void)setInterface:(id)interface;	// 0x360b2a79
// declared property setter: - (void)setReplyBlock:(id)block;	// 0x360b2a49
// declared property setter: - (void)setSelector:(id)selector;	// 0x360b2a89
@end
