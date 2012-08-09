/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebBasePluginPackage.h"

@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
	NSBundle *nsBundle;	// 44 = 0x2c
}
- (id)initWithPath:(id)path;	// 0x31689e55
- (id)bundle;	// 0x3168e491
- (void)dealloc;	// 0x316eb941
- (BOOL)load;	// 0x3168e335
- (Class)viewFactory;	// 0x3168e3e1
@end
