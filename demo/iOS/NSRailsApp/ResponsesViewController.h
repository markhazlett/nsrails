//
//  ResponsesViewController.h
//  NSRailsApp
//
//  Created by Dan Hassin on 2/20/12.
//  Copyright (c) 2012 InContext LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Post.h"

@interface ResponsesViewController : UITableViewController
{
	Post *post;
}

- (id) initWithPost:(Post *)post;

@end
