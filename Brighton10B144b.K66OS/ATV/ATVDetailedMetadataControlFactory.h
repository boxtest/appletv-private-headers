/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVDetailedMetadataControlFactory : XXUnknownSuperclass <BRControlFactory> {
}
+ (id)factory;	// 0x119ae5
- (void)_populateActors:(id)actors forControl:(id)control;	// 0x11a391
- (void)_populateDirectors:(id)directors forControl:(id)control;	// 0x11a409
- (void)_populateMovieDetails:(id)details forControl:(id)control isTrailer:(BOOL)trailer;	// 0x119f11
- (void)_populateProducers:(id)producers forControl:(id)control;	// 0x11a499
- (id)_setupBaseDetailedMetadataControl:(id)control;	// 0x119c89
- (id)_setupMusicDetailedMetadataControl:(id)control;	// 0x119d91
- (void)_setupSpecificDetailedMetadataControl:(id)control forControl:(id)control2;	// 0x119de1
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x119b1d
@end
