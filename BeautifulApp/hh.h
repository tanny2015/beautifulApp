//
//  hh.h
//  BeautifulApp
//
//  Created by tanny on 16/3/3.
//  Copyright © 2016年 xiaoming. All rights reserved.
//

#import <Foundation/Foundation.h>
//////// app一开始就加载下来的一些数据结构

@class Data,Apps,Info,Comments,kData,Up_Users;
@interface hh : NSObject

@property (nonatomic, assign) NSInteger result;

@property (nonatomic, strong) Data *data;

@end
@interface Data : NSObject

@property (nonatomic, strong) NSArray<Apps *> *apps;

@property (nonatomic, assign) NSInteger has_next;

@end

@interface Apps : NSObject

@property (nonatomic, copy) NSString *update_time;

@property (nonatomic, copy) NSString *author_avatar_url;

@property (nonatomic, copy) NSString *cover_comment_created_at;

@property (nonatomic, copy) NSString *cover_comment_author_name;

@property (nonatomic, assign) NSInteger id;

@property (nonatomic, copy) NSString *cover_image;

@property (nonatomic, copy) NSString *author_username;

@property (nonatomic, copy) NSString *qrcode_image;

@property (nonatomic, strong) Comments *comments;

@property (nonatomic, copy) NSString *icon_image;

@property (nonatomic, copy) NSString *version;

@property (nonatomic, copy) NSString *cover_comment_id;

@property (nonatomic, strong) NSArray<Up_Users *> *up_users;

@property (nonatomic, copy) NSString *cover_comment_author_career;

@property (nonatomic, copy) NSString *digest;

@property (nonatomic, assign) NSInteger author_id;

@property (nonatomic, copy) NSString *create_time;

@property (nonatomic, strong) Info *info;

@property (nonatomic, copy) NSString *cover_comment_author_avatar_url;

@property (nonatomic, strong) NSArray *other_download_url;

@property (nonatomic, copy) NSString *author_gender;

@property (nonatomic, copy) NSString *cover_comment_author_bgcolor;

@property (nonatomic, copy) NSString *author_career;

@property (nonatomic, copy) NSString *video_share_url;

@property (nonatomic, copy) NSString *cover_comment_updated_at;

@property (nonatomic, copy) NSString *price_format;

@property (nonatomic, copy) NSString *thankto;

@property (nonatomic, assign) NSInteger price;

@property (nonatomic, copy) NSString *cover_comment_author_gender;

@property (nonatomic, copy) NSString *recommanded_date;

@property (nonatomic, copy) NSString *tags;

@property (nonatomic, assign) NSInteger min_sdk_version;

@property (nonatomic, copy) NSString *content;

@property (nonatomic, copy) NSString *size;

@property (nonatomic, copy) NSString *cover_comment_article;

@property (nonatomic, copy) NSString *sub_title;

@property (nonatomic, assign) BOOL video_is_portrait;

@property (nonatomic, copy) NSString *cover_comment_author_id;

@property (nonatomic, copy) NSString *publish_date;

@property (nonatomic, copy) NSString *download_url;

@property (nonatomic, copy) NSString *author_bgcolor;

@property (nonatomic, copy) NSString *video_url;

@property (nonatomic, copy) NSString *cover_comment_content;

@property (nonatomic, strong) NSArray *same_apps;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *recommanded_background_color;

@property (nonatomic, copy) NSString *package_name;

@property (nonatomic, copy) NSString *recommend_level;

@property (nonatomic, copy) NSString *cover_comment_is_on_cover;

@end

@interface Info : NSObject

@property (nonatomic, copy) NSString *up;

@property (nonatomic, copy) NSString *down;

@property (nonatomic, strong) NSArray<NSString *> *up_users;

@property (nonatomic, copy) NSString *av;

@property (nonatomic, strong) NSArray<NSString *> *down_users;

@property (nonatomic, strong) NSArray<NSString *> *fav_users;

@property (nonatomic, copy) NSString *fav;

@end

@interface Comments : NSObject

@property (nonatomic, strong) NSArray<kData *> *data;

@property (nonatomic, assign) NSInteger has_next;

@end

@interface kData : NSObject

@property (nonatomic, copy) NSString *author_avatar_url;

@property (nonatomic, assign) NSInteger id;

@property (nonatomic, assign) BOOL is_on_cover;

@property (nonatomic, copy) NSString *created_at;

@property (nonatomic, assign) NSInteger article;

@property (nonatomic, copy) NSString *author_career;

@property (nonatomic, copy) NSString *updated_at;

@property (nonatomic, assign) NSInteger author_id;

@property (nonatomic, copy) NSString *author_bgcolor;

@property (nonatomic, copy) NSString *author_gender;

@property (nonatomic, copy) NSString *author_name;

@property (nonatomic, copy) NSString *content;

@end

@interface Up_Users : NSObject

@property (nonatomic, copy) NSString *career;

@property (nonatomic, copy) NSString *gender;

@property (nonatomic, copy) NSString *userName;

@property (nonatomic, copy) NSString *bg_color;

@property (nonatomic, assign) NSInteger id;

@property (nonatomic, copy) NSString *enname;

@property (nonatomic, assign) NSInteger identity;

@property (nonatomic, assign) NSInteger flowers;

@property (nonatomic, copy) NSString *avatar_url;

@end

