/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQLassoGenerator.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHLasso : NSObject <GQLassoGenerator> {
}
+ (int)beginDocument:(id)document state:(id)state;	// 0x317c5625
+ (int)beginWorkspace:(const char *)workspace state:(id)state;	// 0x317c5725
+ (Class)beginWorkspacePage:(id)page state:(id)state;	// 0x317c5759
+ (int)endDocument:(id)document state:(id)state;	// 0x317c5685
+ (int)endWorkspace:(id)workspace;	// 0x317c5775
+ (int)handleDrawableZOrder:(const char *)order state:(id)state;	// 0x317c589d
+ (int)handleStylesheet:(id)stylesheet state:(id)state;	// 0x317c56dd
+ (int)handleWorkspaceStyle:(id)style state:(id)state;	// 0x317c5621
@end

