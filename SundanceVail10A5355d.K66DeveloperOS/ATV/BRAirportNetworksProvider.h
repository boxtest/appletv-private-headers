/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRAirportNetworksProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_networks;	// 4 = 0x4
}
- (id)initWithNetworks:(id)networks;	// 0x33548d
- (id)controlFactory;	// 0x335561
- (id)dataAtIndex:(long)index;	// 0x3355c5
- (long)dataCount;	// 0x3355a5
- (void)dealloc;	// 0x335441
- (id)hashForDataAtIndex:(long)index;	// 0x3355e5
- (void)setNetworks:(id)networks;	// 0x3354e1
@end
