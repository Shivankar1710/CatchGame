name: Daily Puzzles

on:
  schedule:
    - cron: '0 6 * * 0' # Runs every Sunday at 6:00 UTC
  workflow_dispatch: # Allows manual triggering

jobs:
  build:
    runs-on: ubuntu-latest

    steps:
      - name: Checkout repository
        uses: actions/checkout@v2

      - name: Set up Node.js
        uses: actions/setup-node@v2
        with:
          node-version: '18'

      - name: Install dependencies
        run: npm install

      - name: Run daily puzzles script
        run: npm run daily

      - name: Configure Git
        run: |
          git config --global user.name 'github-actions[bot]'
          git config --global user.email 'github-actions[bot]@users.noreply.github.com'

      - name: Commit and push changes
        run: |
          git add static/_instances/daily
          git commit -m 'chore: +1 week of dailies'
          git push
        env:
          GITHUB_TOKEN: ${{ secrets.GITHUB_TOKEN }}