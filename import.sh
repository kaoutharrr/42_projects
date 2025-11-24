#!/usr/bin/env bash
set -e

while IFS='|' read -r remote folder url branch; do
  echo "--------------------------------------"
  echo "Importing $remote from $url into $folder/"
  echo "Branch: $branch"
  echo "--------------------------------------"

  # Add remote if not exists
  git remote add "$remote" "$url" 2>/dev/null || true

  # Fetch remote
  git fetch "$remote"

  # Add subtree
  git subtree add --prefix="$folder" "$remote" "$branch"
done < repos-cpp.txt

echo "======================================"
echo "All C++ modules imported successfully!"
echo "======================================"