/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVScreenSaverPluginProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class RUIRetailControl;

__attribute__((visibility("hidden")))
@interface RUIRetailScreenSaver : XXUnknownSuperclass <ATVScreenSaverPluginProtocol> {
	RUIRetailControl *_control;	// 4 = 0x4
}
- (id)init;	// 0x3b7fe1
- (void).cxx_destruct;	// 0x3b8111
- (id)screenSaverControl;	// 0x3b80f5
- (void)setScreenSaverAutoFired:(BOOL)fired;	// 0x3b8109
- (BOOL)usesVideoPlayback;	// 0x3b810d
@end
