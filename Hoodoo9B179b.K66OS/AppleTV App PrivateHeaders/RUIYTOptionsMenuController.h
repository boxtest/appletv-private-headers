/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTOptionsMenuController.h"
#import "BRSecureResource.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTDocumentLoaderDelegate.h"

@class RUIYTDocumentLoader, RUIYTMediaAsset;

__attribute__((visibility("hidden")))
@interface RUIYTOptionsMenuController : XXUnknownSuperclass <RUIYTDocumentLoaderDelegate, BRSecureResource> {
	RUIYTDocumentLoader *_documentLoader;	// 68 = 0x44
	RUIYTMediaAsset *_origAsset;	// 72 = 0x48
	BOOL _rated;	// 76 = 0x4c
	BOOL _flagged;	// 77 = 0x4d
	BOOL _faving;	// 78 = 0x4e
}
- (id)initWithOriginalAsset:(id)originalAsset blurImage:(id)image;	// 0x8a8d9
- (void).cxx_destruct;	// 0x8b119
- (void)dealloc;	// 0x8ab75
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x8afd9
- (BOOL)isNetworkDependent;	// 0x8ad11
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x8af1d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x8ad15
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x8af19
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x8b0d9
- (void)wasExhumed;	// 0x8ac01
- (void)wasPopped;	// 0x8ac81
@end

@interface RUIYTOptionsMenuController (Private)
- (void)_favingDoneBySaving:(BOOL)saving error:(id)error;	// 0x8b565
- (void)_flag;	// 0x8b751
- (void)_handleRated;	// 0x8b241
- (void)_playNoopSound;	// 0x8b14d
- (void)_rate;	// 0x8b16d
- (void)_removeFromFavorites;	// 0x8b3f5
- (void)_saveToFavorites;	// 0x8b2a9
@end

