/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCarouselViewUIDelegate.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVNPRCarouselUIDelegate : XXUnknownSuperclass <ATVCarouselViewUIDelegate> {
	PositionCoordinates positions[5];	// 4 = 0x4
}
- (id)carouselView:(id)view configurePerspectiveForContext:(id)context;	// 0x37e3c9
- (ATVCarouselViewItemsConfig)carouselView:(id)view itemsConfigForContext:(id)context;	// 0x37e359
- (id)carouselView:(id)view setPositionOfItem:(id)item toPositionAtIndex:(unsigned)index context:(id)context;	// 0x37e469
@end

