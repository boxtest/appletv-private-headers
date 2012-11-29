/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVMusicStoreControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
	BOOL _forMainMenu;	// 4 = 0x4
}
+ (void)initialize;	// 0x1ef7f9
+ (id)mainMenuFactory;	// 0x1ef965
+ (void)registerPopulator:(Class)populator;	// 0x1efa4d
+ (id)standardFactory;	// 0x1ef8c1
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x1efa0d
- (id)_populatorForData:(id)data;	// 0x1f0511
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1efc09
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x1f0301
@end
