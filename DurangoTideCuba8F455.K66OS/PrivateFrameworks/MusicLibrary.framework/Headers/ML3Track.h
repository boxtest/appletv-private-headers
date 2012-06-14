/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"

@class MLChapterTOC;

@interface ML3Track : ML3Entity {
}
@property(readonly, assign, nonatomic) MLChapterTOC *chapterTOC;	// G=0x31bc83a5; 
+ (id)TVShowEpisodesDefaultOrderingProperties;	// 0x31bef7d1
+ (id)albumAllArtistsDefaultOrderingProperties;	// 0x31bc5709
+ (id)albumAndArtistDefaultOrderingProperties;	// 0x31bef7b9
+ (id)albumsDefaultOrderingProperties;	// 0x31bc5309
+ (id)artistAllAlbumsDefaultOrderingProperties;	// 0x31bef7ad
+ (id)artistsDefaultOrderingProperties;	// 0x31bbbebd
+ (id)composersDefaultOrderingProperties;	// 0x31bef7c5
+ (id)containerQueryWithContainer:(id)container;	// 0x31bf74cd
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate;	// 0x31bf747d
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate orderingProperties:(id)properties;	// 0x31bc41a5
+ (id)databaseTable;	// 0x31bbbeb1
+ (id)defaultOrderingProperties;	// 0x31bc3149
+ (id)extraTablesToDelete;	// 0x31bef7dd
+ (id)foreignColumnForProperty:(id)property;	// 0x31bc8851
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x31bc8831
+ (id)genresDefaultOrderingProperties;	// 0x31bef7a1
+ (void)initialize;	// 0x31bb9f0d
+ (id)joinClauseForProperty:(id)property;	// 0x31bbbe91
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x31bc8891
+ (id)orderingPropertiesForITTGTrackOrder:(unsigned long)ittgtrackOrder;	// 0x31bf59cd
+ (id)persistentIDColumnForTable:(id)table;	// 0x31bc8871
+ (id)podcastsDefaultOrderingProperties;	// 0x31bc8f6d
+ (id)podcastsEpisodesDefaultOrderingProperties;	// 0x31bc8f81
+ (id)predisambiguatedProperties;	// 0x31bbbe85
+ (id)sectionPropertyForProperty:(id)property;	// 0x31bbc945
+ (id)subselectPropertyForProperty:(id)property;	// 0x31bef7e9
+ (id)subselectStatementForProperty:(id)property;	// 0x31bbc991
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x31befc51
// declared property getter: - (id)chapterTOC;	// 0x31bc83a5
- (BOOL)deleteFromLibrary;	// 0x31bef851
- (long long)imageDBRecordID:(int)anId;	// 0x31bc5849
- (BOOL)isOTAPurchasedContent;	// 0x31bc7619
- (BOOL)populateArtworkCacheWithArtworkData:(id)artworkData;	// 0x31c04eb9
- (void)populateChapterDataWithImportChapters:(id)importChapters;	// 0x31c045dd
- (void)populateLocationPropertiesWithPath:(id)path;	// 0x31c04215
@end
