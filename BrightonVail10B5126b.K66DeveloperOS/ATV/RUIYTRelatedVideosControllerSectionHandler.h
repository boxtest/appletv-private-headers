/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTListSectionHandling.h"

@class RUIYTRelatedVideosSubMenuController;

__attribute__((visibility("hidden")))
@interface RUIYTRelatedVideosControllerSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling> {
	RUIYTRelatedVideosSubMenuController *_relatedVideosController;	// 4 = 0x4
}
@property(readonly, assign) RUIYTRelatedVideosSubMenuController *relatedVideosController;	// G=0x27da6d; @synthesize=_relatedVideosController
- (id)initWithRelatedVideosController:(id)relatedVideosController;	// 0x27d979
- (void).cxx_destruct;	// 0x27da8d
- (id)itemForIndex:(id)index;	// 0x27d9d9
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x27da21
// declared property getter: - (id)relatedVideosController;	// 0x27da6d
@end
