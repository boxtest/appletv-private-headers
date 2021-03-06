/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import "BRSingleton.h"

@class NSMutableDictionary, NSDictionary, RUIYTDocumentLoader;

__attribute__((visibility("hidden")))
@interface RUIYTFavoritesManager : BRSingleton <RUIYTDocumentLoaderDelegate> {
	BOOL _isDirty;	// 4 = 0x4
	NSMutableDictionary *_loadingFavorites;	// 8 = 0x8
	RUIYTDocumentLoader *_documentLoader;	// 12 = 0xc
	NSDictionary *_favorites;	// 16 = 0x10
}
@property(retain, nonatomic) RUIYTDocumentLoader *documentLoader;	// G=0x3d51b1; S=0x3d51c1; @synthesize=_documentLoader
@property(copy, nonatomic) NSDictionary *favorites;	// G=0x3d51e9; S=0x3d51fd; @synthesize=_favorites
@property(assign, nonatomic) BOOL isDirty;	// G=0x3d5159; S=0x3d5169; @synthesize=_isDirty
@property(retain, nonatomic) NSMutableDictionary *loadingFavorites;	// G=0x3d5179; S=0x3d5189; @synthesize=_loadingFavorites
+ (void)setSingleton:(id)singleton;	// 0x3d4691
+ (id)singleton;	// 0x3d4681
- (id)init;	// 0x3d46b5
- (void).cxx_destruct;	// 0x3d520d
- (void)_accountActivity:(id)activity;	// 0x3d50c9
- (void)dealloc;	// 0x3d47c9
// declared property getter: - (id)documentLoader;	// 0x3d51b1
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x3d4d41
// declared property getter: - (id)favorites;	// 0x3d51e9
- (id)findAssetWithID:(id)anId;	// 0x3d4cd9
// declared property getter: - (BOOL)isDirty;	// 0x3d5159
// declared property getter: - (id)loadingFavorites;	// 0x3d5179
- (void)markAsDirty;	// 0x3d48f9
- (void)purge;	// 0x3d4869
- (void)reload;	// 0x3d4ac1
- (void)removeAssetWithID:(id)anId;	// 0x3d49b9
// declared property setter: - (void)setDocumentLoader:(id)loader;	// 0x3d51c1
// declared property setter: - (void)setFavorites:(id)favorites;	// 0x3d51fd
// declared property setter: - (void)setIsDirty:(BOOL)dirty;	// 0x3d5169
// declared property setter: - (void)setLoadingFavorites:(id)favorites;	// 0x3d5189
@end

