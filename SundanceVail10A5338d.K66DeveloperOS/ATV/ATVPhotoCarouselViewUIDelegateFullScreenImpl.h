/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVCarouselViewUIDelegate.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface ATVPhotoCarouselViewUIDelegateFullScreenImpl : XXUnknownSuperclass <ATVCarouselViewUIDelegate> {
	id _imagePositioningDetails;	// 4 = 0x4
}
@property(copy, nonatomic) id imagePositioningDetails;	// G=0x1077dd; S=0x1077f1; @synthesize=_imagePositioningDetails
- (id)carouselView:(id)view configurePerspectiveForContext:(id)context;	// 0x1070d1
- (ATVCarouselViewItemsConfig)carouselView:(id)view itemsConfigForContext:(id)context;	// 0x107071
- (id)carouselView:(id)view setPositionOfItem:(id)item toPositionAtIndex:(unsigned)index context:(id)context;	// 0x1070d5
// declared property getter: - (id)imagePositioningDetails;	// 0x1077dd
// declared property setter: - (void)setImagePositioningDetails:(id)details;	// 0x1077f1
@end

