/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebBasePluginPackage.h"
#import "WebKit-Structs.h"

@class NSBundle;

__attribute__((visibility("hidden")))
@interface WebPluginPackage : WebBasePluginPackage {
@private
	NSBundle *nsBundle;	// 44 = 0x2c
}
- (id)initWithPath:(id)path;	// 0x3538c3d9
- (id)bundle;	// 0x3539140d
- (void)dealloc;	// 0x353db041
- (BOOL)load;	// 0x353912a9
- (Class)viewFactory;	// 0x35391359
@end

